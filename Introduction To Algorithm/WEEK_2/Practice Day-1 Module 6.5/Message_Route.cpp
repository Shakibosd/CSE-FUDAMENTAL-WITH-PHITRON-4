#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5 + 5;
vector<int> graph[MAX_N];
int disSrc[MAX_N];
int vis[MAX_N];

int bfs(int src, int dis)
{
    fill(disSrc, disSrc + MAX_N, -1);
    fill(vis, vis + MAX_N, 0);
    queue<int> q;
    q.push(src);
    disSrc[src] = 0;
    vis[src] = 1;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        if (cur == dis)
        {
            return 1;
        }
        for (int child : graph[cur])
        {
            if (!vis[child])
            {
                vis[child] = 1;
                disSrc[child] = disSrc[cur] + 1;
                q.push(child);
            }
        }
    }
    return 0;
}

void reconstructPath(int src, int dis)
{
    if (src == dis)
    {
        cout << src << " ";
        return;
    }
    for (int child : graph[dis])
    {
        if (disSrc[child] == disSrc[dis] - 1)
        {
            reconstructPath(src, child);
            cout << dis << " ";
            return;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    if (!bfs(1, n))
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << disSrc[n] + 1 << endl;
        reconstructPath(1, n);
        cout << endl;
    }
    return 0;
}
