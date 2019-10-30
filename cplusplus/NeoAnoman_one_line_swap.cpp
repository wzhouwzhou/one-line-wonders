// C/C++ program to swap two variables in single line 
#include <stdio.h> 
int main() 
{ 
    int x = 5, y = 10; 
    (x ^= y), (y ^= x), (x ^= y);  
    printf("After Swapping values of x and y are %d %d", 
            x, y); 
    return 0; 
} 
