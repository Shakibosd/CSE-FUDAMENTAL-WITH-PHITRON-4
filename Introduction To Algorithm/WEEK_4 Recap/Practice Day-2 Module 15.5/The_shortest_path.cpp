
/*
Input:-1 
4 5
1 4
1 3
3 2
2 4
2 1
2 3
Output:-1 
2
1 2 4
Input:-2 
4 4
2 3
2 1
2 4
4 3
1 3
Output:-2 
2
2 1 3
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
vector<int> v[N];
ll dis[N];
ll pr[N];

void bfs(ll src)
{
    queue<ll> q;
    q.push(src);
    dis[src] = 0;
    pr[src] = -1;
    while (!q.empty())
    {
        ll p = q.front();
        q.pop();
        for (ll child : v[p])
        {
            if (dis[child] == -1)
            {
                q.push(child);
                dis[child] = dis[p] + 1;
                pr[child] = p;
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    ll a, b;
    cin >> a >> b;
    while (e--)
    {
        ll x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    memset(dis, -1, sizeof(dis));
    memset(pr, -1, sizeof(pr));
    bfs(a);
    if (dis[b] == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dis[b] << endl;
        vector<ll> path;
        for (ll v = b; v != -1; v = pr[v])
        {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());
        for (ll x : path)
        {
            cout << x << " ";
        }
    }
    return 0;
}
