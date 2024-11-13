/*Problem Statement

You will be given an undirected graph as input. Then you will be given  queries. For each query you will be given a node . You need to print the nodes that are connected with  in descending order.

Note: If there is no node connected to , then print -1.

Input Format

The first line will contain  and , the number of nodes and the number of edges, respectively. The values of the nodes range from  to .
Next  lines will contain two node values which means there is a connection between first node and second node.
The next line will contain .
The following  lines will each contain .
Constraints

Output Format

Output the nodes that are connected with  in descending order.
Sample Input 0

6 8
0 4
0 5
4 2
4 3
5 3
2 0
0 1
1 3
6
0
1
2
3
4
5
Sample Output 0

5 4 2 1
3 0
4 0
5 4 1
3 2 0
3 0
Sample Input 1

4 3
0 1
1 2
0 4
2
3
0
Sample Output 1

-1
4 1*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
vector<int> v[N];
vector<int> res;
int vis[1000];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        res.push_back(p);
        for (int child : v[p])
        {
            if (vis[child] == 0)
            {
                q.push(child);
                vis[child] = 1;
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
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        vector<int> ve = v[x];
        sort(ve.begin(), ve.end(), greater<int>());
        if (ve.empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int node : ve)
            {
                cout << node << " ";
            }
            cout << endl;
        }
    }
    return 0;
}