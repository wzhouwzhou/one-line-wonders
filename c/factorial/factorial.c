#include<stdio.h>

// To run, compile it with gcc and run the executable passing: ./a.out n, n being the number used in the fibonacci

int fact(int n){
	return ( n==1 ) ? 1 : (n*fact(n-1));
}

int main(int argc, char *argv[]){
	printf("Factorial : %d\n", fact((int) *argv[1] - '0'));
}
