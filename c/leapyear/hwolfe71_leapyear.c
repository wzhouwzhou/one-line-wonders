#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// To run, compile with gcc, or use make, 
// and run the executable with the year as the parameter.
// e.g. hwolfe71_leapyear 2003

bool isLeapYear(int year) {return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)); };

int main(int argc, char *argv[]) {
	printf("%s %s a leap year.\n", argv[1], (isLeapYear(atoi(argv[1])) ? "is" : "isn't"));
}	

