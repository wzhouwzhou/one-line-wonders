#include <bitset>
#include <iostream>
#include <math.h>
using namespace std;

long long n, temp;
bitset<10000005> bs;

void sieve(long long x)
{
    bs.set();
    bs[0] = bs[1] = 0;
    for (long long a = 2; a <= x; a++)
        if (bs[a])
            for (long long b = a * a; b <= x; b += a)
                bs[b] = 0;
}

bool T_Primes(long long x)
{
    if (bs[(int)sqrt(x)] && (long long)sqrt(x) * (long long)sqrt(x) == x)
        return true;
    return false;
}

int main()
{
    sieve(10000000);
    cin >> n;
    while (n--) {
        cin >> temp;
        if (T_Primes(temp))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
