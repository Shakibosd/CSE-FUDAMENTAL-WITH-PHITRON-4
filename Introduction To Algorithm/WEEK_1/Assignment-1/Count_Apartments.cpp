/*Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall or a room. The connected rooms are called apartments. Your task is to count the number of apartments in that building. You can walk left, right, up, and down through the room cells. You can't pass through walls.

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is either .(room) or #(wall).
Constraints

Output Format

Output the number of apartments
Sample Input 0

5 8
########
#..#...#
####.#.#
#..#...#
########
Sample Output 0

3
Sample Input 1

6 8
.#.#####
.#.###..
#..#...#
#.##....
..##.###
#.#.##.#
Sample Output 1

5*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int n, m;
char maze[N][N];
int vis[N][N];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m && maze[x][y] == '.');
}

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = 1;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int cx = p.first;
        int cy = p.second;
        for (int i = 0; i < 4; i++)
        {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (isValid(nx, ny) && !vis[nx][ny])
            {
                q.push({nx, ny});
                vis[nx][ny] = 1;
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
            cin >> maze[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == '.' && !vis[i][j])
            {
                bfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}