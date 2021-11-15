#include <stdio.h>
// number of wanted characters in string
#define N 100
#define str(s) #s
#define xstr(s) str(s)

int main() {char arr[N+1];printf("Type something\n> ");scanf("%"xstr(N)"[^\n]", arr);printf("%s\n", arr);return 0;}

/* gcc -E macro.c | how macro looks "pasted" into code
int main() {
 char arr[100 +1];
 printf("Type something\n> ");
 scanf("%""100""[^\n]", arr);
 printf("%s\n", arr);
 return 0;
}
*/