#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,d,m;
cout<<"\nEnter a number\n\n";
cin>>n;
m=n;
int sum=0;
while(n!=0)
{
d=n%10;
sum=sum+(d*d*d);
n=n/10;
}
if(sum==m)
cout<<"\nIt is an armstrong number";
else
cout<<"\nIt is not an armstrong number";
getch();
}