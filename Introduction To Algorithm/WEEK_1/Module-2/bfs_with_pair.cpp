
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

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({0, src});
    vis[src] = 1;
    int flag = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int pr = p.first;
        int level = p.second;
        if (pr == des)
        {
            cout << level << endl;
            flag = 1;
        }
        for (int child : v[pr])
        {
            if (vis[child] == 0)
            {
                q.push({child, level + 1});
                vis[child] = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
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
    bfs(src, 9);
    return 0;
}