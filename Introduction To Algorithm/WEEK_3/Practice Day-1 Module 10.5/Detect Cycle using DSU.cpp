
/*Given an undirected graph with no self loops with V (from 0 to V-1) nodes and E edges, the task is to check if there is any cycle in the undirected graph.

Note: Solve the problem using disjoint set union (DSU).

Example 1:

Input:

Output: 1
Explanation: There is a cycle between 0->2->4->0
Example 2:

Input:

Output: 0
Explanation: The graph doesn't contain any cycle
Your Task:
You don't need to read or print anyhting. Your task is to complete the function detectCycle() which takes number of vertices in the graph denoting as V and adjacency list adj and returns 1 if graph contains any cycle otherwise returns 0.

Expected Time Complexity: O(V + E)
Expected Space Complexity: O(V)

Constraints:
2 ≤ V ≤ 104
1 ≤ E ≤ 104*/
#include <bits/stdc++.h>
using namespace std;
class Disjoint
{
public:
    vector<int> p, sz;
    Disjoint(int n)
    {
        p.resize(n);
        sz.resize(n, 1);
        iota(begin(p), end(p), 0);
    }
    int find(int u)
    {
        if (u == p[u])
        {
            return u;
        }
        else
        {
            p[u] = find(p[u]);
            return p[u];
        }
    }
    int unionBySize(int u, int v)
    {
        int up = find(u), vp = find(v);

        if (up != vp)
        {
            if (sz[up] < sz[vp])
                swap(up, vp);
            sz[up] += sz[vp];
            p[vp] = up;
            return 1;
        }

        return 0;
    }
};
class Solution
{
public:
    int detectCycle(int V, vector<int> adj[])
    {
        Disjoint d(V);
        set<pair<int, int>> s;
        for (int i = 0; i < V; i++)
        {
            for (int k = 0; k < adj[i].size(); k++)
            {
                int u = i, v = adj[i][k];
                int flag = s.count({u, v}) or s.count({v, u});
                if (flag == 1)
                {
                    continue;
                }
                s.insert({u, v});
                int ans = !d.unionBySize(u, v);
                if (ans == 1)
                {
                    return 1;
                }
            }
        }
        return 0;
    }
};