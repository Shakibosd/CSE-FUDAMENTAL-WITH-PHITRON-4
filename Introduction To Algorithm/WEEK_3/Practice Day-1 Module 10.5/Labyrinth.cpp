
/*Input
The first input line has two integers n and m: the height and width of the map.
Then there are n lines of m characters describing the labyrinth. Each character is . (floor), # (wall), A (start), or B (end). There is exactly one A and one B in the input.
Output
First print "YES", if there is a path, and "NO" otherwise.
If there is a path, print the length of the shortest such path and its description as a string consisting of characters L (left), R (right), U (up), and D (down). You can print any valid solution.
Constraints

1 \le n,m \le 1000

Example
Input:
5 8
########
#.A#...#
#.##.#B#
#......#
########

Output:
YES
9
LDDRRRRRU*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1001;

int n, m;
int maze[N][N];
int vis[N][N];
pair<int, int> p[N][N];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
char dir[4] = {'R', 'L', 'U', 'D'};

int validate(int x, int y)
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
        auto p_cell = q.front();
        q.pop();
        int x = p_cell.first;
        int y = p_cell.second;

        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (validate(new_x, new_y))
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = 1;
                p[new_x][new_y] = {x, y};
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
    if (vis[dst.first][dst.second] == 1)
    {
        cout << "YES" << endl;
        string path = "";
        pair<int, int> cur = dst;
        while (cur != src)
        {
            pair<int, int> prev = p[cur.first][cur.second];
            for (int i = 0; i < 4; i++)
            {
                if (prev.first + dx[i] == cur.first && prev.second + dy[i] == cur.second)
                {
                    path += dir[i];
                    break;
                }
            }
            cur = prev;
        }
        reverse(path.begin(), path.end());
        cout << path.size() << endl;
        cout << path << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
