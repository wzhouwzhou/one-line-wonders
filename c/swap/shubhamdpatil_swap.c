/*
 * @file: shubhamdpatil_swap.c
 */

#include <stdio.h>

#define swap(x, y) ((x ^= y), (y ^= x), (x ^= y))

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Before swap: %d, %d\n", a, b);

	swap(a, b);
	printf("After swap: %d, %d\n", a, b);
	return 0;
}

