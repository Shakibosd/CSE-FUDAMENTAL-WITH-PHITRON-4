
// Approce-1
/*
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int vis[501][501];
    int n, m;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    int valid(int ci, int cj)
    {
        if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int flag;
    void dfs(int si, int sj, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        vis[si][sj] = 1;
        if (grid1[si][sj] == 0)
        {
            flag = 0;
        }
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
            {
                dfs(ci, cj, grid1, grid2);
            }
        }
    }
    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        memset(vis, 0, sizeof(vis));
        n = grid1.size();
        m = grid2[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid2[i][j] == 1)
                {
                    flag = 1;
                    dfs(i, j, grid1, grid2);
                    if (flag == 1)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
*/


//Approce-2
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int n, m, fl, vis[505][505];
    vector<vector<int>> grids1, grids2;
    int valid(int x, int y)
    {
        if (x >= 0 and x < n and y >= 0 and y < m and !vis[x][y] and grids2[x][y])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void dfs(int x, int y)
    {
        if (valid(x, y))
        {
            if (!grids1[x][y])
            {
                fl = 0;
            }
            vis[x][y] = 1;
            dfs(x + 1, y);
            dfs(x - 1, y);
            dfs(x, y + 1);
            dfs(x, y - 1);
        }
    }
    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        memset(vis, 0, sizeof(vis));
        grids1 = grid1, grids2 = grid2;
        n = grid1.size(), m = grid1[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (valid(i, j))
                {
                    fl = 1;
                    dfs(i, j);
                    if (fl)
                    {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};