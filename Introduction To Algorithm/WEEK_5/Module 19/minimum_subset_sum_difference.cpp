
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n], s = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    int dp[n + 1][s + 1];
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
    vector<ll> v;
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= s; j++)
        {
            if (dp[i][j] == 1)
                v.push_back(j);
        }
    }
    ll ans = INT_MAX;
    for (ll val : v)
    {
        ll s1 = val;
        ll s2 = s - s1;
        ans = min(ans, abs(s1 - s2));
    }
    cout << ans << endl;
    return 0;
}