
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e2 + 2;

ll arraySum(ll arr[], ll N)
{
    if (N <= 0)
    {
        return 0;
    }
    else
    {
        return arr[N - 1] + arraySum(arr, N - 1);
    }
}
int main()
{
    ll N;
    cin >> N;
    ll arr[N];
    for (ll i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    ll ans = arraySum(arr, N);
    cout << ans;
    return 0;
}
