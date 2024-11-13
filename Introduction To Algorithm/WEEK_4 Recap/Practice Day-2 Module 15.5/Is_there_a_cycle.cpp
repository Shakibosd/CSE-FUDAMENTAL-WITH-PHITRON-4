

/*
Input:-1
3
0 1 1
0 0 1
0 0 0
Output:-1 
0
Input:-2 
5
0 1 1 0 0
0 0 0 0 0
0 1 0 1 0
0 0 0 0 1
1 0 0 0 0
Output:-2 
1
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e2 + 2;

vector<int> adj[N];
ll vis[N];

ll dfs(ll u)
{
    vis[u] = 1;
    for (ll v : adj[u])
    {
        if (vis[v] == 1)
        {
            return 1;
        }
        if (!vis[v] && dfs(v))
        {
            return 1;
        }
    }
    vis[u] = 2;
    return 0;
}

int main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll val;
            cin >> val;
            if (val == 1)
            {
                adj[i].push_back(j);
            }
        }
    }

    ll cycle = 0;
    memset(vis, 0, sizeof(vis));
    for (ll i = 0; i < n; ++i)
    {
        if (!vis[i] && dfs(i))
        {
            cycle = 1;
            break;
        }
    }
    if (cycle == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
