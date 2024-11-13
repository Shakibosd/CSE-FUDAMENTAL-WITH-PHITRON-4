/*
3 4
....
....
....
1 1
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
int vis[N][N];
int des[N][N];
char a[N][N];

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

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = 1;
    des[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int a = p.first, b = p.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == 1 && vis[ci][cj] == 0)
            {
                q.push({ci, cj});
                vis[ci][cj] = 1;
                des[ci][cj] = des[a][b] + 1;
            }
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

    memset(vis, 0, sizeof(vis));
    memset(des, -1, sizeof(des));

    int si, sj;
    cin >> si >> sj;
    bfs(si, sj);
    cout << des[2][3] << endl;
    return 0;
}