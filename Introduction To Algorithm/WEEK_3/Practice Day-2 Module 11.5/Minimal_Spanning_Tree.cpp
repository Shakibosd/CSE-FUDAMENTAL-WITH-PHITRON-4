
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int p[N];
int grp_sz[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = -1;
        grp_sz[i] = 1;
    }
}
int dsu_find(int node)
{
    if (p[node] == -1)
        return node;
    int leader = dsu_find(p[node]);
    p[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (grp_sz[leaderA] > grp_sz[leaderB])
    {
        p[leaderB] = leaderA;
        grp_sz[leaderA] += grp_sz[leaderB];
    }
    else
    {
        p[leaderA] = leaderB;
        grp_sz[leaderB] += grp_sz[leaderA];
    }
}

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    int totalCost = 0;
    for (Edge ed : edgeList)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
        }
    }
    cout << totalCost << endl;
    return 0;
}