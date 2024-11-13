/*Question: You will be given an undirected graph which will be connected as input. Then you will be given a level L. You need to print the node values at level L in descending order. The source will be 0 always.
Sample Input
3 2
0 1
0 2
1
Sample Output
2 1
Sample Input
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
1
Sample Output
3 2 1
Sample Input
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
2
Sample Output
5 4
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
    int l;
    cin >> l;
    memset(vis, 0, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(0);
    vector<int> levelNode;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == l)
        {
            levelNode.push_back(i);
        }
    }
    sort(levelNode.rbegin(), levelNode.rend());
    for (int node : levelNode)
    {
        cout << node << " ";
    }
    return 0;
}