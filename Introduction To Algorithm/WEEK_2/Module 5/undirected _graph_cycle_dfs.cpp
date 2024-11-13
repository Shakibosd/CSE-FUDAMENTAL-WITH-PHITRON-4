/*
7 6
0 1
1 2
3 4
4 5
5 6
6 3
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
int vis[N];
int pAr[N];
int flag = 0;

void dfs(int p)
{
    vis[p] = 1;
    for (int child : v[p])
    {
        if (vis[child] == 1 && child != pAr[p])
        {
            flag = 1;
        }
        if (vis[p] == 0)
        {
            pAr[child] = p;
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
    memset(pAr, -1, sizeof(pAr));
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