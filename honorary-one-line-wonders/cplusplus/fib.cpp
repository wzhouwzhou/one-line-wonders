#include<iostream.h>
#include<conio.h>

void main(){
	int num,first=1,second=1,sum=0;
	cout<<"Enter numbers to printed";
	cin>>num;

	for(int i=0;i<num;i++){
		cout<<first<<"  ";
		sum=first+second;
		first=second;
		second=sum;
	}
}
