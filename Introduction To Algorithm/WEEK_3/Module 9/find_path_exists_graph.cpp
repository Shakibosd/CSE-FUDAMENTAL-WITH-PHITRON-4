// Approce-1
/*
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int s, vector<vector<int>> &v, vector<int> &vi)
    {
        vi[s] = 1;
        for (int x : v[s])
        {
            if (!vi[x])
            {
                dfs(x, v, vi);
            }
        }
    }
    bool validPath(int n, vector<vector<int>> &edge, int source, int destination)
    {
        if (source == destination)
        {
            return 1;
        }
        vector<int> visit(n, 0);
        vector<vector<int>> v(n);
        for (auto x : edge)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        dfs(source, v, visit);
        return visit[destination];
    }
};
*/

// Approce-2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    class Solution
    {
    public:
        vector<int> v[1000005];
        int vis[1000005];
        void dfs(int src)
        {
            vis[src] = 1;
            for (int child : v[src])
            {
                if (!vis[child])
                {
                    dfs(child);
                }
            }
        }
        int validPath(int n, vector<vector<int>> &edge, int source, int d)
        {
            memset(vis, 0, sizeof(vis));
            for (int i = 0; i < edge.size(); i++)
            {
                int a = edge[i][0];
                int b = edge[i][1];
                v[a].push_back(b);
                v[b].push_back(a);
            }
            dfs(source);
            return vis[d];
        }
    };
    return 0;
}
