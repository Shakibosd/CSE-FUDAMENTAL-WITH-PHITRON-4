
/*Once there was an Emperor named Akbar. He had a son named Jahangir. For an unforgivable reason, the king wanted him to leave the kingdom. Since he loved his son, he decided his son would be banished to a new place. The prince became sad, but he followed his father's will. On the way, he found that the place was a combination of land and water. Since he didn't know how to swim, he was only able to move on the land. He didn't know how many places might be his destination. So, he asked for your help.

For simplicity, you can consider the place as a rectangular grid consisting of some cells. A cell can be a land or can contain water. Each time the prince can move to a new cell from his current position if they share a side.

Now write a program to find the number of cells (unit land) he could reach including the cell he was initially in.

Input
Input starts with an integer T (≤ 500), denoting the number of test cases.

Each case starts with a line containing two positive integers W and H; W and H are the numbers of cells in the x and y directions, respectively. W and H will not be more than 20.

There will be H more lines in the data set, each of which includes W characters. Each character represents the status of a cell as follows.

. - land.
# - water.
@ - initial position of the prince (appears exactly once in a dataset).
Output
For each case, print the case number and the number of cells he can reach from the initial position (including self).

Sample
Input	Output
4
6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.
11 9
.#.........
.#.#######.
.#.#.....#.
.#.#.###.#.
.#.#..@#.#.
.#.#####.#.
.#.......#.
.#########.
...........
11 6
..#..#..#..
..#..#..#..
..#..#..###
..#..#..#@.
..#..#..#..
..#..#..#..
7 7
..#.#..
..#.#..
###.###
...@...
###.###
..#.#..
..#.#..

Case 1: 45
Case 2: 59
Case 3: 6
Case 4: 13*/
#include <bits/stdc++.h>
using namespace std;

const int N = 25;
char a[N][N];
int vis[N][N];
int cnt;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

int valid(int ci, int cj)
{
    return ci >= 0 && ci < n && cj >= 0 && cj < m;
}

void dfs(int si, int sj)
{
    vis[si][sj] = 1;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        cin >> m >> n;
        int si, sj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        }
        cnt = 0;
        memset(vis, 0, sizeof(vis));
        dfs(si, sj);
        cout << "Case " << cs++ << ": " << cnt << endl;
    }
    return 0;
}