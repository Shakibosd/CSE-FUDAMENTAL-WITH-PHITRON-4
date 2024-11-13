
#include <bits/stdc++.h>
#define ll long long 
#define v vector<ll>
using namespace std;
ll canFormExpression(v nums, ll t, ll idx, ll cur)
{
    if (idx == nums.size())
    {
        return cur == t;
    }
    if (canFormExpression(nums, t, idx + 1, cur + nums[idx]))
    {
        return 1;
    }
    if (canFormExpression(nums, t, idx + 1, cur - nums[idx]))
    {
        return 1;
    }
    return 0;
}
int main()
{
    ll n, x;
    cin >> n >> x;
    v a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = canFormExpression(a, x, 1, a[0]);
    if (ans == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
