#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
#define int long long 

int power(int x, int y)
{
    int result = 1;
    x = x % MOD;
    while (y > 0) {
        if (y % 2 == 1) {
            result = (result * x) % MOD;
        }
        y = y / 2;
        x = (x * x) % MOD;
    }
    return result;
}

int32_t main()
{
    int n;
    cin >> n;

    int tDivisor = 1;
    int tSum = 1;
    int tProduct = 1;

    for (int i = 0; i < n; i++)
    {
        int x, k;
        cin >> x >> k;

        tDivisor = (tDivisor * (k + 1)) % MOD;

        int sum = (power(x, k + 1) - 1 + MOD) % MOD;
        sum = (sum * power(x - 1, MOD - 2)) % MOD;
        tSum = (tSum * sum) % MOD;

        int product = power(x, (k * (k + 1)) / 2);
        tProduct = (tProduct * product) % MOD;
    }
    cout << tDivisor << " " << tSum << " " << tProduct << endl;
    return 0;
}
