
// Approce-1
/*
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int n, m;
    int vis[105][105];
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
    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = 1;
        if (si == 0 || si == n - 1 || sj == 0 || sj == m - 1)
        {
            flag = 0;
        }
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 0)
            {
                dfs(ci, cj, grid);
            }
        }
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        memset(vis, 0, sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 0)
                {
                    flag = true;
                    dfs(i, j, grid);
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

// Approce-2
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(vector<vector<int>> &grid, int i, int j)
    {
        if (grid[i][j] == 1)
        {
            return 1;
        }
        if (i <= 0 || j <= 0 || i >= grid.size() - 1 || j >= grid[0].size() - 1)
        {
            return 0;
        }
        grid[i][j] = 1;
        int down = solve(grid, i + 1, j);
        int right = solve(grid, i, j + 1);
        int left = solve(grid, i - 1, j);
        int up = solve(grid, i, j - 1);
        return (up && down && left && right);
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        int cnt = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 0 && i != 0 && j != 0 && i != grid.size() - 1 && j != grid[0].size() - 1)
                {
                    if (solve(grid, i, j))
                    {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};