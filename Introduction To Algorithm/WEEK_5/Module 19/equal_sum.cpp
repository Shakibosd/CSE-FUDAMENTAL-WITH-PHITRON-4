
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll s = 0;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 2 == 0)
    {
        ll sum = s / 2;
        bool dp[n + 1][sum + 1];
        dp[0][0] = 1;
        for (ll i = 1; i <= sum; i++)
        {
            dp[0][i] = 0;
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 0; j <= sum; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[n][sum])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}