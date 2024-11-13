
/*
Input:-1
5
....X
.OOOO
.....
OOOO.
@....
Output:-1 
Y
+++++
+OOOO
+++++
OOOO+
@++++
Input:-2
5
..X..
.....
OOOOO
.....
..@..
Output:-2 
N
Input:-3
5
...X.
.....
O.OOO
.....
....@
Output:-3 
Y
..++.
.++..
O+OOO
.++++
....@

*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e9 + 9;

int main()
{
    ll n;
    cin >> n;
    vector<string> g(n);
    pair<ll, ll> s, end;
    for (ll i = 0; i < n; i++)
    {
        cin >> g[i];
        for (ll j = 0; j < n; j++)
        {
            if (g[i][j] == '@')
            {
                s = {i, j};
            }
            if (g[i][j] == 'X')
            {
                end = {i, j};
            }
        }
    }
    queue<pair<ll, ll>> q;
    vector<vector<ll>> dist(n, vector<ll>(n, N));
    vector<vector<pair<ll, ll>>> pr(n, vector<pair<ll, ll>>(n, {-1, -1}));
    q.push(s);
    dist[s.first][s.second] = 0;
    ll dx[] = {-1, 1, 0, 0};
    ll dy[] = {0, 0, -1, 1};
    while (!q.empty())
    {
        pair<ll, ll> cur = q.front();
        q.pop();
        ll x = cur.first;
        ll y = cur.second;
        if (cur == end)
        {
            break;
        }
        for (ll k = 0; k < 4; ++k)
        {
            ll nx = x + dx[k];
            ll ny = y + dy[k];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && g[nx][ny] != 'O' && dist[nx][ny] == N)
            {
                q.push({nx, ny});
                dist[nx][ny] = dist[x][y] + 1;
                pr[nx][ny] = {x, y};
            }
        }
    }
    if (dist[end.first][end.second] == N)
    {
        cout << "N" << endl;
        return 0;
    }
    while (end != s)
    {
        ll x = end.first;
        ll y = end.second;
        g[x][y] = '+';
        end = pr[x][y];
    }
    g[s.first][s.second] = '@';
    cout << "Y" << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << g[i] << endl;
    }
    return 0;
}
