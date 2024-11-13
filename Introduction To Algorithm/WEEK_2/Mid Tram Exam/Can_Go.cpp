/*Problem Statement

You will be given  numbers of nodes,  numbers of edges in a graph. For each edge you will be given ,  and  which means there is a connection from  to  only and for which you need to give  cost. The value of nodes could be from  to .

You will be given a source node . Then you will be given a test case , for each test case you will be given a destination node  and a cost . You need to tell if you can go to the destination from source using atmost  cost.

Input Format

First line will contain  and .
Next  lines will contain ,  and .
Next line will contain source node .
Next line will contain , the number of test cases.
For each test case, you will get  and .
Constraints

Output Format

Ouput "YES" or "NO" for each test case if it is possible to go from  to  using atmost  cost.
Sample Input 0

5 7
1 2 10
1 3 2
3 2 1
2 4 7
3 4 2
4 5 5
2 5 2
1
5
1 0
2 5
3 1
4 4
5 6
Sample Output 0

YES
YES
NO
YES
YES*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 1e9 + 9;
vector<pair<int, int>> v[N];
int dis[N];
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
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
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
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
    }
    int src;
    cin >> src;
    int t;
    cin >> t;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    while (t--)
    {
        int dest, maxCost;
        cin >> dest >> maxCost;
        dijkstra(src);
        int flag = dis[dest] <= maxCost;
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
