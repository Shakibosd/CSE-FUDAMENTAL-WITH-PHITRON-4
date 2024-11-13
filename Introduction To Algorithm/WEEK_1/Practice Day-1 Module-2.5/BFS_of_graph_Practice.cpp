class Solution
{
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> bfs;
        vector<bool> visited(V, 0);
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            bfs.push_back(u);
            for (int v : adj[u])
            {
                if (!visited[v])
                {
                    q.push(v);
                    visited[v] = 1;
                }
            }
        }
        return bfs;
    }
};