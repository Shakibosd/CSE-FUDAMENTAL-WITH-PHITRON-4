
/*
Input:-1 
4 4
1 3
1 2 1
2 3 2
3 4 5
4 1 4
Output:-1 
3
1 2 3
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF = 1e18;
const ll N = 1e5 + 5;

vector<pair<ll, ll>> adj[N];
ll dis[N];
ll pr[N];

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});
    dis[src] = 0;
    pr[src] = -1;
    while (!pq.empty())
    {
        ll u = pq.top().second;
        ll d = pq.top().first;
        pq.pop();
        if (d != dis[u])
        {
            continue;
        }
        for (auto edge : adj[u])
        {
            ll v = edge.first;
            ll w = edge.second;
            if (dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
                pr[v] = u;
                pq.push({dis[v], v});
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    ll s, f;
    cin >> s >> f;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    memset(dis, 1, sizeof(dis));
    memset(pr, 1, sizeof(pr));
    dijkstra(s);
    if (dis[f] == INF)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dis[f] << endl;
        vector<ll> path;
        for (ll v = f; v != -1; v = pr[v])
        {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());
        for (ll x : path)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
