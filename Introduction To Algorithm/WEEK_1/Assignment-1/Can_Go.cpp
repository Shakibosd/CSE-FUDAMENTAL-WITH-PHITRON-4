/*Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall, a floor or a room. You will be given two rooms  and . You need to tell if you can go from room  to  by passing through the floors. You can walk left, right, up, and down through the floor cells. You can't pass through walls.

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is .(floor), #(wall), A or B (rooms).
Constraints

Output Format

Output YES if you can go from room  to , NO otherwise.
Sample Input 0

5 8
########
#.A#...#
#.##.#B#
#......#
########
Sample Output 0

YES*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int n, m;
int maze[N][N];
int vis[N][N];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int valid(int x, int y)
{
    return !vis[x][y] && maze[x][y] != -1 && x >= 0 && x < n && y >= 0 && y < m;
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = 1;
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (valid(new_x, new_y))
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = 1;
            }
        }
    }
}
int main()
{
    pair<int, int> src, dst;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
            {
                maze[i][j] = -1;
            }
            if (s[j] == 'A')
            {
                src = {i, j};
            }
            if (s[j] == 'B')
            {
                dst = {i, j};
            }
        }
    }
    bfs(src);
    int flag = vis[dst.first][dst.second] == 1;
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}