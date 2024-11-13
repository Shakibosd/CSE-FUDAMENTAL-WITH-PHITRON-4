/*Question: You will be given an undirected graph as input. You need to tell the number of nodes in each component in ascending order.

Sample Input
6 5
0 1
0 2
0 3
2 3
4 5
Sample Output
2 4
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
2 3 4
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
7
Sample Input
10 5
1 2
2 3
1 3
4 0
5 6
Sample Output
1 1 1 2 2 3
(Because 7 8 and 9 nodes are not connected, but they are also components)
*/
#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 5;
vector<int> v[n];
int vis[n];
vector<int> cmp_sz;
void dfs(int src, int &size)
{
    vis[src] = 1;
    size++;
    for (int child : v[src])
    {
        if (!vis[child])
        {
            dfs(child, size);
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
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            int sz = 0;
            dfs(i, sz);
            cmp_sz.push_back(sz);
        }
    }
    sort(cmp_sz.begin(), cmp_sz.end());
    for (int size : cmp_sz)
    {
        cout << size << " ";
    }
    return 0;
}
