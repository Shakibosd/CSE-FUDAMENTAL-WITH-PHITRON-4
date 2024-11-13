

/*
Input:-1 
3 2
1 2
3 2
Output:-1 
YES
Input:-2 
3 1
1 3
Output:-2 
NO
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;

ll n, e;
vector<ll> adj[N];
ll vis[N];

void dfs(ll src)
{
    vis[src] = 1;
    for (ll v : adj[src])
    {
        if (!vis[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);
    int flag = 1;
    for (ll i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
