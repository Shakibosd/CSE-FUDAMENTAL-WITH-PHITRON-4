/*Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall or a room. The connected rooms are called apartments. Your task is to count the number rooms in each of the apartments in that building. You can walk left, right, up, and down through the room cells. You can't pass through walls.

You need to print the count of the rooms in ascending order. If there are no apartments available in that building, then you should print .

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is either .(room) or #(wall).
Constraints

Output Format

Output the number of rooms in each of the apartments in ascending order.
Sample Input 0

5 8
########
#..#...#
####.#.#
#..#...#
########
Sample Output 0

2 2 8
Sample Input 1

6 8
.#.#####
.#.###..
#..#...#
#.##....
..##.###
#.#.##.#
Sample Output 1

1 1 2 8 10*/

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

int bfs(int x, int y)
{
    int roomCnt = 0;
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = 1;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int cx = p.first;
        int cy = p.second;
        roomCnt++;
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
    return roomCnt;
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
    vector<int> aprtCnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == '.' && !vis[i][j])
            {
                int cnt = bfs(i, j);
                aprtCnt.push_back(cnt);
            }
        }
    }
    sort(aprtCnt.begin(), aprtCnt.end());
    if (aprtCnt.empty())
    {
        cout << "0" << endl;
    }
    else
    {
        for (int cnt : aprtCnt)
        {
            cout << cnt << " ";
        }
    }
    return 0;
}
