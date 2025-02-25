/*
5 8
0 1 10
0 2 7
0 3 4
1 4 3
2 4 5
2 1 1
3 4 5
3 2 1
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 2;
vector<pair<int, int>> v[N];
int des[N];
class cmp
{
public:
    int operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    des[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();
        int node = p.first;
        int cost = p.second;
        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if (cost + childCost < des[childNode])
            {
                des[childNode] = cost + childCost;
                pq.push({childNode, des[childNode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        des[i] = INT_MAX;
    }
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << des[i] << endl;
    }
    return 0;
}