
/*4
2 3 4 5
3 4 5 6
5*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e3 + 3, W = 1e3 + 3;
ll dp[N][W];

ll knapsack(ll N, ll weight[], ll val[], ll W)
{
    if (N == 0 || W == 0)
    {
        return 0;
    }
    if (dp[N][W] != -1)
    {
        return dp[N][W];
    }
    if (weight[N - 1] <= W)
    {
        ll op1 = knapsack(N - 1, weight, val, W - weight[N - 1]) + val[N - 1];
        ll op2 = knapsack(N - 1, weight, val, W);
        return dp[N][W] = max(op1, op2);
    }
    else
    {
        ll op2 = knapsack(N - 1, weight, val, W);
        return dp[N][W] = op2;
    }
}

int main()
{
    ll N;
    cin >> N;
    ll weight[N], val[N];
    for (ll i = 0; i < N; i++)
    {
        cin >> weight[i];
    }
    for (ll i = 0; i < N; i++)
    {
        cin >> val[i];
    }
    ll W;
    cin >> W;
    for (ll i = 0; i <= N; i++)
    {
        for (ll j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << knapsack(N, weight, val, W) << endl;
    return 0;
}