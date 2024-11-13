
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    bool isValid(int i, int j, int r, int c)
    {
        return i >= 0 and i < r and j >= 0 and j < c;
    }
    void dfs(int i, int j, vector<vector<int>> &grid)
    {
        grid[i][j] = 1;
        for (auto child : moves)
        {
            int si = i + child.first;
            int sj = j + child.second;
            if (isValid(si, sj, grid.size(), grid[0].size()) && grid[si][sj] == 0)
            {
                dfs(si, sj, grid);
            }
        }
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        int r = grid.size();
        int c = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
                {
                    if (grid[i][j] == 0)
                    {
                        dfs(i, j, grid);
                    }
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == 0)
                {
                    dfs(i, j, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};