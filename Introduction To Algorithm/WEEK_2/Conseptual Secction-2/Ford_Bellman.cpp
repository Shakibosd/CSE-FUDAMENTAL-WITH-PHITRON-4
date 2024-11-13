
/*
Input data
First the number of vertices n (1 ≤ n ≤ 100) is given. It is followed by the number of edges m (0 ≤ m ≤ 10000). Next m triples describe the edges: beginning of the edge, the end of the edge and its weight (an integer from -100 to 100).

Output data
Print n numbers - the distance from the vertex number 1 to all other vertices of the graph. If the path to the corresponding vertex does not exist, instead of the path length print the number 30000.

Examples
Input 
4 5
1 2 10
2 3 10
1 3 100
3 1 -10
2 3 1
Output
0 10 11 30000
*/
#include <bits/stdc++.h>
using namespace std;
class edge
{
public:
    int u, v, c;
    edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 105;
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<edge> edgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edgeList.push_back(edge(u, v, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = 30000;
    }
    dis[1] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (edge ed : edgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < 30000 && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << dis[i] << " ";
    }
    return 0;
}