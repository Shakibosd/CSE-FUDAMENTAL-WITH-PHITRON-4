
/*Question: You will be given an undirected graph as input. Then you will be given a query Q. For each query, you will be given source S and destination D. You need to print the shortest distance between S and D. If there is no path from S to D, print -1.

Sample Input
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
6
0 5
1 5
2 5
2 3
1 4
0 0
Sample Output
2
3
3
2
2
0
Sample Input
7 5
0 1
0 2
4 5
4 6
5 7
3
0 4
5 1
1 3
Sample Output
-1
-1
-1
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int vis[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    level[src] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int child : v[p])
        {
            if (vis[child] == 0)
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[p] + 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int src, dis;
        cin >> src >> dis;
        memset(vis, 0, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(src);
        if (level[dis] == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << level[dis] << endl;
        }
    }
    return 0;
}