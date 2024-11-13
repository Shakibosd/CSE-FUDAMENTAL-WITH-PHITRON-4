/*
Problem Statement

You will be given an undirected graph where there will be  nodes and  edges. You need to tell the number of edges that can create a cycle in the graph.

Note: Duplicate edges as input can not be possible. The value of nodes are from  to .

Input Format

First line will contain  and .
Next  lines will contain  and  which means there is a edge between  and .
Constraints

Output Format

Output the number of edges that can create a cycle.
Sample Input 0

5 7
1 2
2 3
3 4
4 5
4 1
2 4
5 3
Sample Output 0

3
Sample Input 1

3 3
1 2
2 3
1 3
Sample Output 1

1
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e6 + 6;
vector<int> v[N];
ll vis[N];
ll pAr[N];
ll Cycle;

void bfs(ll src)
{
    queue<ll> q;
    q.push(src);
    vis[src] = 1;
    while (!q.empty())
    {
        ll p = q.front();
        q.pop();
        for (ll child : v[p])
        {
            if (vis[child] == 1 && pAr[p] != child)
            {
                Cycle++;
            }
            if (vis[child] == 0)
            {
                vis[child] = 1;
                pAr[child] = p;
                q.push(child);
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, 0, sizeof(vis));
    memset(pAr, -1, sizeof(pAr));
    Cycle = 0;

    for (ll i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            bfs(i);
        }
    }
    cout << Cycle / 2 << endl;
    return 0;
}
