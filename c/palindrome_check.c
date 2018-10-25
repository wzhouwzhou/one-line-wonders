
/*
gcc palindrome_check.c
./a.out
Finds length of string
*/

#include <stdio.h>
#include <string.h>

int palindrome_check(char *buffer) {
  return strcmp(buffer, reverse(buffer));
}

int main(int argc, char **argv){
  scanf("[^\n]\n", buffer);
  if (palindrome_check(buffer))
    printf("Palindrome\n");
  else
    printf("Not a palindrome\n");
  return 0;
}
