/*Question: You will be given an undirected graph as input. Then you will be given a node N. You need to print the number of nodes that are directly connected to the node N.

Sample Input
6 5
0 1
0 2
0 3
2 3
4 5
2
Sample Output
2
Sample Input
6 5
0 1
0 2
0 3
2 3
4 5
0
Sample Output
3
Sample Input
7 7
0 1
1 2
2 3
1 3
4 0
0 5
5 6
1
Sample Output
3
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
    int node;
    cin >> node;
    memset(vis, 0, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(node);
    int cntNode = 0;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == 1)
        {
            cntNode++;
        }
    }
    cout << cntNode << endl;
    return 0;
}