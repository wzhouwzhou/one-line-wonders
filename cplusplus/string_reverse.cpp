#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	string s;
	cout<<"\nEnter string: ";getline(cin,s);
	reverse(s.begin(),s.end());
	cout<<"\nReversed string: "<<s;
}
