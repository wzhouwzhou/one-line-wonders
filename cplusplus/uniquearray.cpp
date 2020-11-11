#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a; 
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++)						//Take the vector
	{	cin>>a; v.push_back(a); }
	
	for (auto i=v.begin(); i!=v.end(); i++)		//Remove duplicates
		for(auto j=i+1;j!=v.end();j++)
			if(*i==*j) v.erase(j--); 	

	for (auto i=v.begin(); i!=v.end();i++)		//Print the reult
        cout<<*i<<" ";
}