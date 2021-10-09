#include<stdio.h>
int main()
{
	int arr[6][6];
	int i;
	int j;
	int put;
	put=1;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			arr[i][j]=put++;
			
		}
	}
	for (i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%2d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("wave traversal\n");
	for(i=0;i<6;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<=5;j++)
			{
				printf("%2d ",arr[j][i]);
			}
		}
		else
		{
			for(j=5;j>=0;j--)
			{
				printf("%2d ",arr[j][i]);
			}
		}
		printf("\n");
	}
	
}
//output
 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36
wave traversal
 1  7 13 19 25 31
32 26 20 14  8  2
 3  9 15 21 27 33
34 28 22 16 10  4
 5 11 17 23 29 35
36 30 24 18 12  6

--------------------------------
Process exited after 0.05695 seconds with return value 10
Press any key to continue . . .
