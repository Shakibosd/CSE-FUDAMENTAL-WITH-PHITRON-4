class Solution
{
public:
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        set<pair<int, int>> pq;
        vector<int> dist(V, INT_MAX);
        dist[S] = 0;
        pq.insert({0, S});
        while (!pq.empty())
        {
            auto it = *(pq.begin());
            int d = it.first;
            int node = it.second;
            pq.erase(it);
            for (auto it : adj[node])
            {
                int wt = it[1];
                int adjnode = it[0];
                if (d + wt < dist[adjnode])
                {
                    if (dist[adjnode] == INT_MAX)
                    {
                        pq.erase({dist[adjnode], adjnode});
                    }
                    dist[adjnode] = d + wt;
                    pq.insert({d + wt, adjnode});
                }
            }
        }
        return dist;
    }
};