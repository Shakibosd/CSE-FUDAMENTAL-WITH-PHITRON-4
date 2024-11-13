
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
int dis[N];
int vis[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    dis[src] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int child : v[p])
        {
            if (!vis[child])
            {
                vis[child] = 1;
                q.push(child);
                dis[child] = dis[p] + 1;
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
    memset(vis, 0, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    int src, d, k;
    cin >> src >> d >> k;

    bfs(src);

    if (dis[d] != -1 && dis[d] <= k * 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}