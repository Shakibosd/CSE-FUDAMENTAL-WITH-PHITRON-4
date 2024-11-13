
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1005][1005];

ll subset_sum(ll n, ll a[], ll s)
{
    if (n == 0)
    {
        if (s == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }
    if (a[n - 1] <= s)
    {
        ll op1 = subset_sum(n - 1, a, s - a[n - 1]);
        ll op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, a, s);
    }
}
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
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }
    if (subset_sum(n, a, s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}