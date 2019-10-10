#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of elements\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++) cin>>arr[i];
    int start=0,end=0,sum=0,maxsum=0;
    for(int i=0;i<n;i++){ sum+=arr[i]; if(sum<0) { sum=0; start=i+1;}  if(sum>maxsum){   maxsum=sum; end=i; } }
    cout<<"Max sum starts from "<<start<<" and ends at "<<end;
    return 0;
}