#include<stdio.h>
#include<stdlib.h>
int main()
{   system("cls");
    int n,a,b;
    scanf("%d",&n);
    a=n;
    b=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf(" ");
        }
        for(int k=0;k<b;k++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
        a--;
        b++;
    }

    
}