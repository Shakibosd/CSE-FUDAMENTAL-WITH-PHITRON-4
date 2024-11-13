
/*
Mita is a sweet girl. Rita is Mita's younger sister. They always play together and behave like good friends. But Rita has some duties to her sister as weint. One day their parents have gone out for work and said to lock the door until they come back. As Rita is younger, their parents gave the key to her. Now, Mita needs to go out for tuition. She has to take the key from Rita to open the door. You can assume that their house is an N x N matrix shape. Mita can move in four directions: North, East, West, and South. But she can't move where an obstacle is present in their house. Now, you have to find the minimum steps for Mita to go out.

The Input:
Input starts with an integer T <= 20, the number of test cases. Each test case starts with an positive integer N <= 30, size of N x N matrix. Then the matrix is fiinted with M, R, O, T and D.
M represents the position of Mita, R represents the position of Rita, O represents the position of obstacles, T represents there is no obstacle, D represents the position of the door.

The Output:
For each input set print the minimum steps for Mita to go out in a separate line.
Note: If she can't go out then print -1.

Sample Input
2
4
O O R O
O T T O
O T T D
O M T O
4
O O R O
T O O D
O M T O
O O O O

Sample Output

-1
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 30;
const int N = 1e9;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int bfs(vector<string> grid, int n, pair<int, int> start)
{
    vector<vector<int>> dist(n, vector<int>(n, N));
    queue<pair<int, int>> q;
    q.push(start);
    dist[start.first][start.second] = 0;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && grid[nx][ny] != 'O' && dist[nx][ny] == N)
            {
                dist[nx][ny] = dist[cur.first][cur.second] + 1;
                q.push({nx, ny});
            }
        }
    }
    return dist[n - 1][n - 1];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> grid(n);
        pair<int, int> mita, rita;
        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 'M')
                {
                    mita = {i, j};
                }
                else if (grid[i][j] == 'R')
                {
                    rita = {i, j};
                }
            }
        }

        int steps = bfs(grid, n, mita);
        if (steps == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << steps + 1 << endl;
            cout << -1 << endl;
        }
    }
    return 0;
}
