/*
6 6
0 1
0 2
0 3
1 4
3 5
3 2
*/


#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
vector<int> v[N];
int vis[N];

void dfs(int src)
{
    cout << src << " ";
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
    dfs(0);
    return 0;
}