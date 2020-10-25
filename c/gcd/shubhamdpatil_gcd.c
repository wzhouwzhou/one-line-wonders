/*
 * @file: shubhamdpatil_gcd.c
 */

#include <stdio.h>

int gcd(int x, int y)
{
	return (y == 0) ? x : gcd(y, x % y);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("GCD of %d and %d: %d\n", a, b, gcd(a, b));
	return 0;
}
