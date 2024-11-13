/*Problem Statement

You'll be given a graph of  nodes and  edges. For each edge, you'll be given ,  and  which means there is an edge from  to  only and which will cost .

Also, you'll be given  queries, for each query you'll be given  and , where  is the source and  is the destination. You need to print the minimum cost from  to  for each query. If there is no connection between  and , print .

Note: There can be multiple edges from one node to another. Make sure you handle this one.

Input Format

First line will contain  and .
Next  lines will contain ,  and .
After that you'll get .
Next  queries will contain  and .
Constraints

Output Format

Output the minimum cost for each query.
Sample Input 0

4 7
1 2 10
2 3 5
3 4 2
4 2 3
3 1 7
2 1 1
1 4 4
6
1 2
4 1
3 1
1 4
2 4
4 2
Sample Output 0

7
4
6
4
5
3
Sample Input 1

4 4
1 2 4
2 3 4
3 1 2
1 2 10
6
1 2
2 1
1 3
3 1
2 3
3 2
Sample Output 1

4
6
8
2
4
6*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e18;

int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = N;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b], (ll)c);
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] != N && adj[k][j] != N && adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    long long int q;
    cin >> q;
    while (q--)
    {
        long long int src, dis;
        cin >> src >> dis;
        if (adj[src][dis] == N)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj[src][dis] << endl;
        }
    }
    return 0;
}
