
/*
Input:-1
4 5
1 2 10
2 3 10
1 3 100
3 1 -10
2 3 1
Output:-1 
0 10 11 30000
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e3 + 3;

int main()
{
    ll n, e;
    cin >> n >> e;
    vector<vector<ll>> v(n, vector<ll>(n, N));

    for (ll i = 0; i < n; i++)
    {
        v[i][i] = 0;
    }

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a - 1][b - 1] = c;
    }

    for (ll k = 0; k < n; k++)
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (v[i][k] < N && v[k][j] < N)
                {
                    v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
                }
            }
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (v[0][i] == N)
        {
            cout << "30000 ";
        }
        else
        {
            cout << v[0][i] << " ";
        }
    }
    return 0;
}
