/*
8 5
1 2
1 3
4 5
6 7
8 8
 */
#include <bits/stdc++.h>
using namespace std;
const int N = 101;
vector<int> adj[N];
int visited[N];
int bfs(int src)
{
    int count = 0;
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        count++;
        for (int child : adj[parent])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
    return count;
}
int cnt = 0;
void dfs(int src)
{
    cnt++;
    visited[src] = true;
    for (int child : adj[src])
    {
        if (!visited[child])
            dfs(child);
    }
}
int main()
{
    int node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count = 0;
    for (int i = 1; i <= node; i++)
    {
        if (!visited[i])
        {
            // int sz = bfs(i);
            // if(sz > 1)
            cnt = 0;
            dfs(i);
            if (cnt > 1)
                count++;
        }
    }
    cout << count << endl;
}