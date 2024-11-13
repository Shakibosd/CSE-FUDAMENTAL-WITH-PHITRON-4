#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll s;
    cin >> s;
    ll dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (ll i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j <= s; j++)
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
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= s; j++)
        {
            if (dp[i][j])
            {
                cout << "T ";
            }
            else
            {
                cout << "F ";
            }
        }
        cout << endl;
    }
    // if (dp[n][s])
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    return 0;
}