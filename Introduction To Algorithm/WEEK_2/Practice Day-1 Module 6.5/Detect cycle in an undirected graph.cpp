class Solution
{
public:
    bool detect(int i, vector<int> adj[], int vis[])
    {
        vis[i] = 1;
        queue<pair<int, int>> q;
        q.push({i, -1});

        while (!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;

            q.pop();
            for (auto adjacent : adj[node])
            {
                if (!vis[adjacent])
                {
                    vis[adjacent] = 1;
                    q.push({adjacent, node});
                }
                else if (adjacent != parent)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[])
    {
        int vis[V] = {0};
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (detect(i, adj, vis))
                {
                    return true;
                }
            }
        }
        return false;
    }
};