/*
6 5
0 1
1 2
0 2
3 4
3 5
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
int vis[N];

void dfs(int src)
{
    // cout<<src<<endl;
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
        if (!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout << "Component : " << cnt << endl;
    return 0;
}