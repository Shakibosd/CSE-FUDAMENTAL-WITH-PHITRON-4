class Solution
{
public:
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> result;
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                dfsUtil(i, adj, visited, result);
            }
        }
        return result;
    }
    void dfsUtil(int v, vector<int> adj[], vector<bool> &visited, vector<int> &result)
    {
        visited[v] = true;
        result.push_back(v);
        for (int neighbor : adj[v])
        {
            if (!visited[neighbor])
            {
                dfsUtil(neighbor, adj, visited, result);
            }
        }
    }
};