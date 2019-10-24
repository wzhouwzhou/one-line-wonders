#include <stdio.h>
#include <stdlib.h>

void is_powerof_2(int x)
{
    for(int p = 1; p < x ; p *= 2, printf("%s%s", p == x ? "Yes\n" : "", p > x && x > 1 ? "No\n" : ""));
}

int main ( int argc, char *argv[] )
{
    int value;
    do {
        printf("Enter a number > 1: ");
        scanf("%d", &value);
    }while(value <= 1);
    is_powerof_2(value);
    return EXIT_SUCCESS;
}
