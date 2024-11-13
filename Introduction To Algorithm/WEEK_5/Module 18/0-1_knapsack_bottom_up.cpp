
/*5
2 3 4 5 9
3 4 8 8 10
20
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll weight[n], val[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    ll w;
    cin >> w;
    ll dp[n + 1][w + 1];
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= w; j++)
        {
            if (weight[i - 1] <= j)
            {
                ll op1 = dp[i - 1][j - weight[i - 1]] + val[i - 1];
                ll op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else
            {
                ll op2 = dp[i - 1][j];
                dp[i][j] = op2;
            }
        }
    }
    // for (ll i = 0; i <= n; i++)
    // {
    //     for (ll j = 0; j <= w; j++)
    //     {
    //         cout << dp[i][j] < " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n][w] << endl;
    return 0;
}
