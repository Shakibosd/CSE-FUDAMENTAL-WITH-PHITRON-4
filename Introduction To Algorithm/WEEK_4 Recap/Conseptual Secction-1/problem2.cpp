
/*
2. Kamal lives in mazenda city. In his neighbourhood there are several houses too. Some of them are directly connected to Kamal's house, and some of them are indirectly connected. This time the roads are only one-way. If there are N houses and E roads in his area. Every house has a unique number from 0 to N-1. Can you tell how many houses Kamal can go directly or indirectly if Kamal's house if his house number is K?

Note: You can go in the road only in one direction.
6 5
0 1
0 2
0 3
2 3
4 5
2

Ans : 
1
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<int> adj[N];
bool vis[N];

int cnt = 0;
void dfs(int src)
{
    cnt++;
    vis[src] = true;
    for (int child : adj[src])
    {
        if (vis[child])
            continue;
        dfs(child);
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
        adj[a].push_back(b);
    }
    int k;
    cin >> k;
    dfs(k);
    cout << cnt - 1 << endl;
    return 0;
}