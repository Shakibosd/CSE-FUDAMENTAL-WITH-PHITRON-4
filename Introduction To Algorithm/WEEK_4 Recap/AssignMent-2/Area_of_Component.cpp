
/*
Problem Statement

You will be given a 2D matrix of size  which will contain only dot(.) and minus(-) where dot(.) means you can go in that cell and minus(-) means you can't.

You can move in only 4 directions (Up, Down, Left and Right).

The area of a component is the number of dots(.) in that component that can be accessible. You need to tell the minimum area of all available components.

Note: If there are no components, print -1.

Input Format

First line will contain  and .
Next you will be given the 2D matrix.
Constraints

Output Format

Output the minimum area.
Sample Input 0

6 5
..-..
..-..
-----
.-...
.----
.....
Sample Output 0

3
Sample Input 1

3 3
---
---
---
Sample Output 1

-1
*/
#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
using namespace std;

const ll N = 1e3 + 3;
char a[N][N];
ll vis[N][N];

vector<pi> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

ll n, m;
ll valid(ll i, ll j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

ll dfs(ll si, ll sj)
{
    vis[si][sj] = 1;
    ll area = 0;
    for (ll i = 0; i < 4; i++)
    {
        ll ci = si + d[i].first;
        ll cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.')
        {
            area += dfs(ci, cj);
        }
    }
    return area + 1;
}

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    ll mn = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                ll cmpArea = dfs(i, j);
                mn = min(mn, cmpArea);
            }
        }
    }

    int flag = INT_MAX;
    if (mn == flag)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << mn << endl;
    }
    return 0;
}
