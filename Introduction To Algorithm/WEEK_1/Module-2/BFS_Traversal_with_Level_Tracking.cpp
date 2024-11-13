
/*
10 8
0 1
1 2
0 4
1 3
2 0
3 4
1 5
3 6
7 8
8 9
0
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
vector<int> v[N];
int vis[N];
int level[N];

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

    int src;
    cin >> src;
    memset(vis, 0, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(src);
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << level[i] << endl;
    }
    return 0;
}