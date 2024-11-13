/*
3 4
....
....
....
1 1
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 2;
char a[N][N];
int vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;
int valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return 0;
    }
    return 1;
}

void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == 1 && vis[ci][cj] == 0)
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, 0, sizeof(vis));
    dfs(si, sj);
    return 0;
}