#include <iostream>

using namespace std;

void issquare(long long int a){
int flag=1;	for(long long  i=1;i<=a/2+1;i++){	if(i*i==a)	{cout<<"it is a square number\n";flag=0;}	}if(flag==1)	cout<<"Not a square number\n";		
}

int main(){
long long int a;
cin>>a;
issquare(a);
return 0;
}
