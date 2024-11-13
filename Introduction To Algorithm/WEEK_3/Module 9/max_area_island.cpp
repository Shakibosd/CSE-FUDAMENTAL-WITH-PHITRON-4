
// Approce-1
/*
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool vis[55][55];
    int ans;
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
    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = 1;
        ans++;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                dfs(ci, cj, grid);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        memset(vis, 0, sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    ans = 0;
                    dfs(i, j, grid);
                    mx = max(mx, ans);
                }
            }
        }
        return mx;
    }
};
*/

// Approce-2
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dfs(vector<vector<int>> &grid, int i, int j)
    {
        int m = grid.size();
        int n = grid[0].size();
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0)
        {
            return 0;
        }
        grid[i][j] = 0;
        return 1 + dfs(grid, i + 1, j) + dfs(grid, i, j - 1) + dfs(grid, i - 1, j) + dfs(grid, i, j + 1);
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int res = 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    res = max(res, dfs(grid, i, j));
                }
            }
        }
        return res;
    }
};