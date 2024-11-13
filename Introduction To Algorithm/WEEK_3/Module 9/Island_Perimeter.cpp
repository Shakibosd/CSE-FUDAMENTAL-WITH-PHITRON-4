
// Approce-1
/*
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int ans = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        int x[] = {-1, 1, 0, 0};
        int y[] = {0, 0, 1, -1};
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == 1)
                {
                    int toadd = 4;
                    for (int d = 0; d < 4; d++)
                    {
                        int xc = i + x[d];
                        int yc = j + y[d];
                        if (xc >= 0 && xc < rows && yc >= 0 && yc < cols)
                        {
                            if (grid[xc][yc] == 1)
                            {
                                toadd--;
                            }
                        }
                    }
                    ans += toadd;
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
    bool vis[105][105];
    int ans;
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    int n, m;
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
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj))
            {
                if (grid[ci][cj] == 0)
                {
                    ans++;
                }
            }
            else
            {
                ans++;
            }
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                dfs(ci, cj, grid);
            }
        }
    }
    int islandPerimeter(vector<vector<int>> &grid)
    {
        memset(vis, 0, sizeof(vis));
        ans = 0;
        n = grid.size();
        m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    dfs(i, j, grid);
                }
            }
        }
        return ans;
    }
};