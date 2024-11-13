/*Problem Statement

You will be given a 2D matrix of size  which will contain only dot() and minus() where dot() means you can go in that cell and minus() means you can't.

You can move in only 4 directions (Up, Down, Left and Right).

You will be given the indexes of two cells - (,) and (,). You need to tell if these  and  cells are in the same component or not. Same component means you can go from  to .

Input Format

First line will contain  and .
Next you will be given the 2D matrix.
Next line will contain  and .
Last line will contain  and .
Constraints

Output Format

Output "YES" if those cell are in the same component, "NO" otherwise.
Sample Input 0

5 4
..-.
---.
..-.
--..
....
0 1
3 2
Sample Output 0

NO
Sample Input 1

5 4
....
---.
..-.
--..
....
0 1
3 2
Sample Output 1

YES*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
int n, m;
char maze[N][N];
int vis[N][N];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && maze[x][y] == '.';
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
            if (valid(new_x, new_y) && !vis[new_x][new_y])
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = 1;
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
    int si, sj;
    cin >> si >> sj;
    bfs({si, sj});
    int di, dj;
    cin >> di >> dj;
    int flag = vis[di][dj];
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}