#include <stdio.h>
void main()
{
 int a,b;
 printf("enter a and b\n");
 scanf("%d%d",&a,&b);
 a=(a+b)-(b=a);     // one line code
 printf("a=%d and b=%d",a,b);
}
