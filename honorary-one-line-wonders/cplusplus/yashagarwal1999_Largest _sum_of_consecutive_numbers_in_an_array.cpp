#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
pair<ll,ll> maxsum(ll arr[],ll n)
{
ll sum=0;
ll max=0;
pair<ll,ll>p;
ll x=0,y=0;
for(ll i=0;i<n;i++)
{
sum+=arr[i];
if(sum>max){max=sum;y=i;}
if(sum<0){sum=0;x=i+1;}

}
p.first=x;
p.second=y;
return p;
}

int main()
{
int n;
cin>>n;
ll arr[n];
for(ll i=0;i<n;i++)cin>>arr[i];
pair<ll,ll>p=maxsum(arr,n);
cout<<p.first<<" "<<p.second<<endl;
return 0;
}
