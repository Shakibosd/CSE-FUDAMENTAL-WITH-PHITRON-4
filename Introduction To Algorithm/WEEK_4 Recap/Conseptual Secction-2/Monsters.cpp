

/*
Input:

5 8
########
#M..A..#
#.#.M#.#
#M#..#..
#.######
Output:

YES
5
RRDDR
*/
#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
using namespace std;

const ll N = 1e3 + 3;
ll n, m;
ll sx, sy, dx, dy;
char g[N][N];
ll vis[N][N];
pi path[N][N];

vector<pi> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

class cmp
{
public:
    ll x;
    ll y;
    char nm;

    cmp(ll x, ll y, char nm)
    {
        this->x = x;
        this->y = y;
        this->nm = nm;
    }
};

ll is_valid(ll x, ll y)
{
    return x >= 0 && x < n && y >= 0 && y < m && g[x][y] != '#';
}

queue<cmp> q;
void bfs()
{
    while (!q.empty())
    {
        cmp p = q.front();
        q.pop();
        for (auto x : d)
        {
            ll cx = p.x + x.first;
            ll cy = p.y + x.second;

            if (is_valid(cx, cy) && !vis[cx][cy])
            {
                q.push(cmp(cx, cy, p.nm));
                vis[cx][cy] = 1;
                g[cx][cy] = p.nm;
                if (p.nm == 'A')
                {
                    path[cx][cy] = {x.first, x.second};
                }
            }
        }
    }
}

ll is_outer(ll x, ll y)
{
    return x == 0 || y == 0 || x == n - 1 || y == m - 1;
}

ll check_possibility()
{
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (is_outer(i, j) && g[i][j] == 'A')
            {
                dx = i;
                dy = j;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> g[i][j];
            if (g[i][j] == 'M')
            {
                q.push(cmp(i, j, 'M'));
                vis[i][j] = 1;
            }
            if (g[i][j] == 'A')
            {
                sx = i;
                sy = j;
            }
        }
    }
    q.push(cmp(sx, sy, 'A'));
    vis[sx][sy] = 1;
    bfs();
    if (!check_possibility())
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
    }
    // path prlling
    pair<ll, ll> coords = {dx, dy};
    vector<pi> ans;
    while (coords.first != sx || coords.second != sy)
    {
        ans.push_back(path[coords.first][coords.second]);
        coords.first -= ans.back().first;
        coords.second -= ans.back().second;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        if (x.first == -1 && x.second == 0)
        {
            cout << "U";
        }
        if (x.first == 1 && x.second == 0)
        {
            cout << "D";
        }
        if (x.first == 0 && x.second == -1)
        {
            cout << "L";
        }
        if (x.first == 0 && x.second == 1)
        {
            cout << "R";
        }
    }
    cout << endl;
    return 0;
}