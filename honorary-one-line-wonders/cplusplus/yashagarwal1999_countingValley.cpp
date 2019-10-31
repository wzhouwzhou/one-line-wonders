#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int countingValleys(int n, string s) {


int sum=0;
if(s[0]=='U')sum++;
else sum--;
int count=0;
if(sum<0)count++;
for(int i=1;i<n;i++)
{
    if(s[i]=='D')sum--;
    else sum++;
    if(s[i]=='D' && sum==-1)count++;
}
return count;

}

int main()
{
int n;
cin>>n;
string s;
cin>>s;
cout<<countingValleys(n,s)<<endl;
return 0;
}
