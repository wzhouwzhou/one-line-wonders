/* gcc -o isPrime.exe isPrime.c -D DEBUG to enable assertions. */
#if DEBUG
#include <assert.h>
#endif

#include <stdio.h>
#include <stdlib.h>


/* Function declaration. */
int isPrime(long number, long iter);

/* Main function body. */
#if !DEBUG
int main(int argc, char *argv[])
#else
int main(void)
#endif
{
#if !DEBUG
	/* Using command line input. */
	long numberToCheck = 0;

	if (argc < 2) /* First argument is the program name (argv[0]), which is "main". */
	{
		printf("Not enough arguments.\n");
		return 1;
	}
	
	/* Check if prime. */
	if ( isPrime(atol(argv[1]), 1) ) /* atoi returns 0 if string is not a number. */
	{
		printf("%s is a prime number.\n", argv[1]);
	}
	else
	{
		/* TODO: Add error messages for specific invalid input. Right now there is only a generic message for all errors. */
		printf("%s is not a prime number\n", argv[1]);
	}

	return 0;
#else
	/* For debugging. */
	assert(!isPrime(-5, 1));
	assert(!isPrime(-2, 1));
	assert(!isPrime(-1, 1));
	assert(!isPrime(1,  1));
	assert( isPrime(2,  1));
	assert( isPrime(3,  1));
	assert( isPrime(5,  1));
	assert(!isPrime(6,  1));
	assert( isPrime(11, 1));
	assert( isPrime(13, 1));
	assert( isPrime(17, 1));
	assert( isPrime(19, 1));
	assert(!isPrime(20, 1));
#endif
} /* End main. */

/* One-liner function definition. */
int isPrime(long number, long iter) 
{ 
	/* Super inneficient but fun! */
	return (number<2) ? 0 : (iter*iter>number) ? 1 : !(number%iter) && iter>1 ? 0 : isPrime(number, iter+1); 
} /* End isPrime. */