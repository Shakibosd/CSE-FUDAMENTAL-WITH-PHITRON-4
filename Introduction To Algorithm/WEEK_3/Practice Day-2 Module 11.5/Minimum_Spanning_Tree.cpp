
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int> key(V, 2147483647);
        vector<int> mst(V, 0);
        vector<int> parent(V, -1);
        key[0] = 0;
        for (int i = 0; i < V; i++)
        {
            int mini = 2147483647;
            int u;
            for (int j = 0; j < V; j++)
            {
                if (mst[j] == 0 && key[j] < mini)
                {
                    u = j;
                    mini = key[j];
                }
            }
            mst[u] = 1;
            for (auto it : adj[u])
            {
                int v = it[0];
                int w = it[1];
                if (mst[v] == 0 && w < key[v])
                {
                    key[v] = w;
                    parent[v] = u;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < V; i++)
        {
            sum += key[i];
        }
        return sum;
    }
};
