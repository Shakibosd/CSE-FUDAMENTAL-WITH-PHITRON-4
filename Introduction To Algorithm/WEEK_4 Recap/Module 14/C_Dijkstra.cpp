
#include <bits/stdc++.h>

#define ll long long
#define pi pair<ll, ll>

using namespace std;

const ll N = 1e6 + 6;
vector<pi> v[N];
ll des[N];
ll p[N];

class cmp
{
public:
    ll operator()(pi a, pi b)
    {
        return a.second > b.second;
    }
};

void dijkstra(ll src)
{
    priority_queue<pi, vector<pi>, cmp> pq;
    pq.push({src, 0});
    des[src] = 0;
    while (!pq.empty())
    {
        pi pr = pq.top();
        pq.pop();
        ll node = pr.first;
        ll cost = pr.second;
        for (pi child : v[node])
        {
            ll childNode = child.first;
            ll childCost = child.second;
            if (cost + childCost < des[childNode])
            {
                des[childNode] = cost + childCost;
                pq.push({childNode, des[childNode]});
                p[childNode] = node;
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for (ll i = 1; i <= n; i++)
    {
        des[i] = 1e18;
        p[i] = -1;
    }
    dijkstra(1);
    if (des[n] == 1e18)
    {
        cout << -1 << endl;
    }
    else
    {
        ll x = n;
        vector<ll> path;
        while (x != -1)
        {
            path.push_back(x);
            x = p[x];
        }
        reverse(path.begin(), path.end());
        for (ll val : path)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
