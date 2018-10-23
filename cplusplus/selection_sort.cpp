#include <bits/stdc++.h>
using namespace std;
int n, s[10009];

int main (){
	scanf("%d", &n);
	for(int a=0;a<n;a++) scanf("%d", s+a);
	//Selection sort
	for(int i=0;i<n;i++) swap(s[i], *min_element(s+i, s+n));

	for(int a=0;a<n;a++) printf("%d%c", s[a], " \n"[a==n-1]);
}
