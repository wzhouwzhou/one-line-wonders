// Author: Ankur S (www.github.com/s-ankur)
// Caesar Cipher C Style
// Usage:
// gcc caesar.c
// ./a.out
// Input: <number of characters> <string>
// Output: <ciphertext>

#include <stdio.h>
int main()
{
    char s[100];
    int n;
    scanf("%d %s",&n,s); 
    for(char * sp=s;*sp && (*sp=(*sp+n-'a'+26)%26+'a') ;sp++);
    printf("%s",s);
}
