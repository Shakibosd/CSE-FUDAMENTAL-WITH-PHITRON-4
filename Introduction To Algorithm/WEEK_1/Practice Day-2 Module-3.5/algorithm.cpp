/*Question: You will be given a directed graph as input. Then you will be given a node N. You need to tell the number of nodes that can be visited from node N.

Sample Input
6 5
0 1
0 2
0 3
2 3
4 5
2
Sample Output
4
Sample Input
6 5
0 1
0 2
0 3
2 3
4 5
4
Sample Output
2 //প্রেকটিস ডকে ভুলে ৩ আসছিল আউটপুট সঠিক আউটপুট ২ ই হবে।
Sample Input
7 6
0 1
1 2
2 3
1 3
4 0
5 6
1
Sample Output
5
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
    int x;
    cin >> x;
    memset(vis, 0, sizeof(vis));
    dfs(x);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
