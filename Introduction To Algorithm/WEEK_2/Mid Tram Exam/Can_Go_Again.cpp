/*Problem Statement

You will be given  numbers of nodes,  numbers of edges in a graph. For each edge you will be given ,  and  which means there is a connection from  to  only and for which you need to give  cost. The value of nodes could be from  to .

You will be given a source node . Then you will be given a test case , for each test case you will be given a destination node . You need to tell the minimum cost from source node to destination. If there is no possible path from  to  then print Not Possible.

Note: If there is a negative weight cycle in the graph, then no answer would be correct. So print one line only - "Negative Cycle Detected".

Input Format

First line will contain  and .
Next  lines will contain ,  and .
Next line will contain source node .
Next line will contain , the number of test cases.
For each test case, you will get .
Constraints

Output Format

Output the minimum cost for each test case.
Sample Input 0

5 7
1 2 10
1 3 -2
3 2 1
2 4 7
3 4 -3
4 5 5
2 5 2
1
5
1
2
3
4
5
Sample Output 0

0
-1
-2
-5
0
Sample Input 1

5 7
1 2 10
1 3 -2
3 2 1
2 4 7
3 4 -3
4 5 5
2 5 2
5
5
1
2
3
4
5
Sample Output 1

Not Possible
Not Possible
Not Possible
Not Possible
0
Sample Input 2

5 8
1 2 -2
1 3 -10
3 2 1
2 4 7
4 3 -3
4 5 5
2 5 2
4 1 1
1
5
1
2
3
4
5
Sample Output 2

Negative Cycle Detected*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<pair<ll, ll>>> adj(n + 1);
    while (m--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    ll src;
    cin >> src;
    vector<ll> dis(n + 1, LLONG_MAX);
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (auto edge : adj[j])
            {
                ll a = edge.first;
                ll b = edge.second;
                if (dis[j] != LLONG_MAX && dis[j] + b < dis[a])
                {
                    dis[a] = dis[j] + b;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (auto edge : adj[i])
        {
            ll a = edge.first;
            ll b = edge.second;
            if (dis[i] != LLONG_MAX && dis[i] + b < dis[a])
            {
                cout << "Negative Cycle Detected" << endl;
                return 0;
            }
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll dest;
        cin >> dest;
        if (dis[dest] == LLONG_MAX)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[dest] << endl;
        }
    }
    return 0;
}
