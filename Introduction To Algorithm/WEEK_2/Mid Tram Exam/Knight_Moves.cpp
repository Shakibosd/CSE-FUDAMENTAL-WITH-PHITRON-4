/*Problem Statement

You will be given a chessboard of  size. You can move anywhere in the chessboard freely. You will be given two cells - the knight's cell  ( and ), and the queen's cell  ( and ). You need to tell the minimum number of steps for the knight to attack the queen if the queen doesn't move.

A knight move in 8 directions. The directions are given below:image

Input Format

First line will contain , the number of test cases.
First line of each test case will contain  and .
Second line of each test case will contain  and .
Third line of each test case will contain  and .
Constraints

Output Format

Output the minimum number of steps for the knight to reach the queen. If you can't reach to queen, print .
Sample Input 0

4
8 8
0 0
7 7
5 6
0 1
0 1
4 4
0 0
0 1
2 2
0 0
0 1
Sample Output 0

6
0
3
-1
Explanation 0

For the first test case, one of the possible answer could be this way:
image*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 2;
int vis[N][N];

int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

int valid(int x, int y, int n, int m)
{
    return (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y]);
}

int bfs(pair<int, int> src, pair<int, int> dst, int n, int m)
{
    queue<pair<int, int>> q;
    q.push(src);
    vis[src.first][src.second] = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        if (x == dst.first && y == dst.second)
        {
            return vis[x][y];
        }
        for (int i = 0; i < 8; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (valid(new_x, new_y, n, m))
            {
                q.push({new_x, new_y});
                vis[new_x][new_y] = vis[x][y] + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        pair<int, int> kn, qu;
        cin >> kn.first >> kn.second;
        cin >> qu.first >> qu.second;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                vis[i][j] = 0;
            }
        }
        int s = bfs(kn, qu, n, m);
        if (s != -1)
        {
            cout << s << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
