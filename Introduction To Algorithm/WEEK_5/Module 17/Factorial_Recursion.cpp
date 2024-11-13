

#include <bits/stdc++.h>
#define ll long long
using namespace std;
// O(N)
ll fact(ll n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }
    ll factorial = fact(n - 1);
    return factorial * n;
}
int main()
{
    ll n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}