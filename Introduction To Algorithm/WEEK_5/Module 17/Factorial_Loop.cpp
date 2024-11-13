
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n, fact = 1;
    cin >> n;
    // O(N)
    for (ll i = 1; i <= n; i++)
    {
        fact *= i;
        // cout << fact << endl;
    }
    cout << fact << endl;
    return 0;
}