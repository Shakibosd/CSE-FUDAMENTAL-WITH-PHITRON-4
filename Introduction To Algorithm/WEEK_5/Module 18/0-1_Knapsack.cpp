
/*
4
2 3 4 5
1 3 5 3
8
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll n = 1e5 + 5;

ll knapsack(ll n, ll weight[], ll val[], ll w)
{
    if (n < 0 || w == 0)
    {
        return 0;
    }
    // duita option
    // niye dekhbo, na niye dekhbo
    if (weight[n - 1] <= w)
    {
        ll op1 = knapsack(n - 1, weight, val, w - weight[n - 1]) + val[n - 1];
        ll op2 = knapsack(n - 1, weight, val, w);
        return max(op1, op2);
    }
    else
    {
        // ekta option
        // na niye dekte hobe
        ll op2 = knapsack(n - 1, weight, val, w);
        return op2;
    }
}
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
    int ans = knapsack(n, weight, val, w);
    cout << ans << endl;
    return 0;
}