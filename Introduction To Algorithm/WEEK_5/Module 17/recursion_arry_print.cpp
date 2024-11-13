
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e2 + 2;

void printArray(ll arr[], ll N, ll idx)
{
    if (idx >= N)
    {
        return;
    }
    cout << arr[idx] << " ";
    printArray(arr, N, idx + 1);
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
    printArray(arr, N, 0);
    return 0;
}
