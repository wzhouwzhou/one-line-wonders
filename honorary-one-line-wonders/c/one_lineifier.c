/*
 * One Lineifier
 * Command line program that takes a text file as input
 * and outputs a file with all line breaks.
 */

#include <stdio.h>

void one_line(FILE *in, FILE *out) {
  char temp;
  while (fscanf(in, "%c", &temp) != -1) if (temp != '\n') fprintf(out, "%c", temp);
  return;
}

int main(int argc, char **argv) {
  if (argc != 3) {
    printf("Error: Invalid number of arguments!\n");
    printf("Usage: one_lineifier.c <input> <output>\n");
    return -1;
  }
  FILE *in = NULL;
  FILE *out = NULL;
  in = fopen(argv[1], "r");
  if (in == NULL) {
    printf("Error: Input not available for reading!\n");
    return -1;
  }
  out = fopen(argv[2], "w");
  if (out == NULL) {
    printf("Error: Output not available for writing!\n");
    fclose(in);
    in = NULL;
    return -1;
  }
  
  one_line(in, out);
  
  return 0;
}  