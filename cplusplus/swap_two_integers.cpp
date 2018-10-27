#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b, a = (a+b) - (b=a), cout << a << " " << b << endl;
	return 0;
}
