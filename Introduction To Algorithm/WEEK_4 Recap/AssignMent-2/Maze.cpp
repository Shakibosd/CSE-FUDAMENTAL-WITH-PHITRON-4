#include <bits/stdc++.h>
#define pi pair<ll, ll>
#define ll long long
using namespace std;

const ll N = 1e3 + 3;
ll vis[N][N];
char ar[N][N];
map<pi, pi> par;
ll n, m;

vector<pi> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

ll valid(ll i, ll j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void bfs(ll a, ll b)
{
    queue<pi> q;
    q.push({a, b});
    vis[a][b] = 1;
    par[{a, b}] = {-1, -1};
    while (!q.empty())
    {
        pi cur = q.front();
        q.pop();
        ll ci = cur.first;
        ll cj = cur.second;
        for (pi dir : d)
        {
            ll v = ci + dir.first;
            ll w = cj + dir.second;
            if (valid(v, w) && !vis[v][w] && ar[v][w] != '#')
            {
                vis[v][w] = 1;
                q.push({v, w});
                par[{v, w}] = {ci, cj};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }
    ll a, b, di, dj;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (ar[i][j] == 'R')
            {
                a = i;
                b = j;
                bfs(a, b);
            }
            if (ar[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    if (!vis[di][dj])
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << ar[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        ll x = di, y = dj;
        while (x != -1 && y != -1)
        {
            if (ar[x][y] == '.')
            {
                ar[x][y] = 'X';
            }
            ll p = par[{x, y}].first;
            ll pj = par[{x, y}].second;
            x = p;
            y = pj;
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << ar[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}