/*
9 8
2 1
1 0
0 3
3 1
2 4
4 5
5 6
2 6
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
int vis[N];
int pVis[N];
int flag;

void dfs(int p)
{
    vis[p] = 1;
    pVis[p] = 1;
    for (int child : v[p])
    {
        if (pVis[child])
        {
            flag = 1;
        }
        if (vis[child] == 0)
        {
            dfs(child);
        }
    }
    pVis[p] = 0; // kaj ses
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
    memset(pVis, -1, sizeof(pVis));
    
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i);
        }
    }
    if (flag == 1)
    {
        cout << "Cycle Found" << endl;
    }
    else
    {
        cout << "No Cycle" << endl;
    }
    return 0;
}