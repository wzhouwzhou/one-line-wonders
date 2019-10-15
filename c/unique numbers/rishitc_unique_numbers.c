#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node* createNode(int);
node* createList(int);
void display(node*);
void destroy(node**);
void insertOrder(int, node**);
int presenceOf(int, node*);

int main() {
    node *head = NULL;
    int len;

    printf("The number of elements in the list:\n");
    scanf("%d", &len);
    if(!len) {printf("No elements to input, Exiting...\n"); return 0;}
    else if(len < 0) {printf("Cannot input %d many elements, Exiting...\n", len); return 0;}
    printf("Enter the elements of the list:\n");
    head = createList(len);

    printf("The list after removing duplicates is:\n");
    display(head);

    destroy(&head);
    return 0;
}

void destroy(node** head) {
    for(node *temp; *head != NULL; temp = (*head), (*head) = (*head) -> next, free(temp));
}

void display(node* temp) {
    for(; temp != NULL; printf("%d ", temp -> data), temp = temp -> next);
}
node* createNode(int data) {
    node *temp = calloc(1, sizeof(node));
    temp -> data = data;
    return temp;
}

node* createList(int len) {
    node *temp = NULL;

    for(int i = 0, num; i < len; ++i) {
        scanf("%d", &num);
        presenceOf(num, temp) ?: insertOrder(num, &temp);
    }

    return temp;
}

void insertOrder(int data, node** head) {
    node *temp = createNode(data);

    // no elements in ordered linked list
    if(!head) {
        *head = temp;
        return;
    }
    // One or more elements in ordered linked list
    else {
        node *t, *prev;
        for(t = *head, prev = NULL; t != NULL && t -> data < data; prev = t, t = t -> next);
        if(!prev) { // insert as first node of ordered linked list
            temp -> next = *head;
            (*head) = temp;
        }
        else if(!t) { // last node of ordered linked list
            prev -> next = temp;
        }
        else { // insert somewhere in between the ordered linked list
            prev -> next = temp;
            temp -> next = t;
        }
    }
}

int presenceOf(int num, node* temp) {
    for(; temp != NULL && temp -> data != num; temp = temp -> next);
    if(!temp) 
        return 0;
    return 1;
}