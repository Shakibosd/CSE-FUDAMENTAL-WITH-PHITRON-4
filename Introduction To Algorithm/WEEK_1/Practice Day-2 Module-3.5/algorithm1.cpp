/*Question: You will be given an undirected graph as input. You need to tell the number of components in this graph.

Sample Input
6 5
0 1
0 2
0 3
2 3
4 5
Sample Output
2
Sample Input
9 7
0 1
0 2
0 3
2 3
4 5
6 8
7 6
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
Sample Output
1
Sample Input
10 5
1 2
2 3
1 3
4 0
5 6
Sample Output
6 
(Because 7 8 and 9 nodes are not connected, but they are also components)
*/
#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 5;
vector<int> v[n];
int vis[n];
void dfs(int src)
{
    vis[src] = 1;
    for (int child : v[src])
    {
        if (vis[child] == 0)
        {
            dfs(child);
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
    memset(vis, 0, sizeof(vis));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
