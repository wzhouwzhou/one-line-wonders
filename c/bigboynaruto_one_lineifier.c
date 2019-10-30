#include <stdio.h>

void print_one_line(FILE *in) {
  for (char temp; fscanf(in, "%c", &temp) != -1;) if (temp != '\n') printf("%c", temp);
}

int main(int argc, char **argv) {
  if (argc != 2) {
    printf("Error: Invalid number of arguments!\n");
    printf("Usage: one_lineifier.c <input>\n");
    return -1;
  }
  FILE *in = NULL;
  in = fopen(argv[1], "r");
  if (in == NULL) {
    printf("Error: Input not available for reading!\n");
    return -1;
  }
  
  print_one_line(in);
  
  return 0;
}  
