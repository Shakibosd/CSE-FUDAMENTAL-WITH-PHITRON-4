
//O(2^N)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;

ll fibo(ll n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int ans = fibo(n - 1) + fibo(n - 2);
    return ans;
}

int main()
{
    ll n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}