
// Approce-1
/*
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int vis[301][301];
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
    void dfs(int si, int sj, vector<vector<char>> &grid)
    {
        vis[si][sj] = 1;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '1')
            {
                dfs(ci, cj, grid);
            }
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        memset(vis, 0, sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == '1')
                {
                    dfs(i, j, grid);
                    ans++;
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
    int numIslands(vector<vector<char>> &grid)
    {
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0, offsets[] = {0, 1, 0, -1, 0};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    islands++;
                    grid[i][j] = '0';
                    queue<pair<int, int>> todo;
                    todo.push({i, j});
                    while (!todo.empty())
                    {
                        pair<int, int> p = todo.front();
                        todo.pop();
                        for (int k = 0; k < 4; k++)
                        {
                            int r = p.first + offsets[k], c = p.second + offsets[k + 1];
                            if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == '1')
                            {
                                grid[r][c] = '0';
                                todo.push({r, c});
                            }
                        }
                    }
                }
            }
        }
        return islands;
    }
};