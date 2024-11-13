
/*
Input:-1
6 5
0 1 1 0 0 0
1 0 0 0 0 0
1 1 0 0 0 0
0 0 0 0 1 0
0 0 1 1 0 0
0 1 0 0 0 0
Output:-1
2 2 1 1 0 -1
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e9 + 9;

int main()
{
    ll n, x;
    cin >> n >> x;
    ll mt[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> mt[i][j];
        }
    }
    vector<ll> dist(n, N);
    queue<ll> q;
    dist[x - 1] = 0;
    q.push(x - 1);
    while (!q.empty())
    {
        ll p = q.front();
        q.pop();
        for (ll i = 0; i < n; i++)
        {
            if (mt[p][i] && dist[i] == N)
            {
                dist[i] = dist[p] + 1;
                q.push(i);
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (dist[i] == N)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << dist[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
