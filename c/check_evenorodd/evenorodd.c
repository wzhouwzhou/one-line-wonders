#include <stdio.h>
int evenorodd(int num){return (num%2==0)?printf("%d is even",num):printf("%d is odd",num); }
void main()
{
	evenorodd(5);
}
