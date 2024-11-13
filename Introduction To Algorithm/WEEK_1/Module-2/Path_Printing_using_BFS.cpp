
/*
6 7
0 1
1 2
1 3
2 4
2 5
4 5
4 3
0
5
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
vector<int> v[N];
int vis[N];
int pr[N];
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
                pr[child] = p;
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

    int src, des;
    cin >> src >> des;
    memset(vis, 0, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(pr, -1, sizeof(pr));
    bfs(src);
    int x = des;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = pr[x];
    }
    reverse(path.begin(), path.end());
    for (int val : path)
    {
        cout << val << " ";
    }
    return 0;
}