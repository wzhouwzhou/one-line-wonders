
/*
gcc bubblesort.c
./a.out

99% solution for bubble sort
*/

#include <stdio.h>

# define ITERATIONS 1000000 // more iterations for greater chance of actually sorting; fewer for more efficiency ;)

void oneLinerBubbleSort(int * a, int s){
    for(int i=0; i<ITERATIONS; i++){for(int j=1; j<s; j++){if (a[j]<a[j-1]){int t=a[j-1]; a[j-1]=a[j]; a[j]=t;}}}
}

int main(int argc, char **argv){
    int test_array[] = {15, 3, 0, -40, 3, 3623450, 9, 9, 2, 86};
    oneLinerBubbleSort(test_array, sizeof(test_array) / sizeof(test_array[0]));
    
    for(int i=0; i < 10; i++){
        printf("%d\n", test_array[i]);
    }
    return 0;
}