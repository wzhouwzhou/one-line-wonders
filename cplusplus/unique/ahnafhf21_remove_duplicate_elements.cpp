#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    cout << "How many elements? "; cin >> n;
    int a[n];
    cout << endl << "Enter elements of array" << endl;
    for(i = 0;i < n; ++i) cin >> a[i];

    // One line insertion via == lookup loop
    for(i = 0; i < n; ++i) for(j = i + 1; j < n; ++j) if (a[i] == a[j]) for(--n, k = j--; k < n; ++k) a[k] = a[k + 1];

    cout << n << " unique" << endl;
    for(i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << endl;
    return 0;
}
