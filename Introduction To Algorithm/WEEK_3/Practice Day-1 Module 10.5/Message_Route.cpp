
/*Input
The first input line has two integers n and m: the number of computers and connections. The computers are numbered 1,2,\dots,n. Uolevi's computer is 1 and Maija's computer is n.
Then, there are m lines describing the connections. Each line has two integers a and b: there is a connection between those computers.
Every connection is between two different computers, and there is at most one connection between any two computers.
Output
If it is possible to send a message, first print k: the minimum number of computers on a valid route. After this, print an example of such a route. You can print any valid solution.
If there are no routes, print "IMPOSSIBLE".
Constraints

2 \le n \le 10^5
1 \le m \le 2 \cdot 10^5
1 \le a,b \le n

Example
Input:
5 5
1 2
1 3
1 4
2 3
5 4

Output:
3
1 4 5*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
int disSrc[N];
int vis[N];

int bfs(int src, int dis)
{
    queue<int> q;
    q.push(src);
    disSrc[src] = 0;
    vis[src] = 1;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        if (cur == dis)
        {
            return 1;
        }
        for (int child : v[cur])
        {
            if (!vis[child])
            {
                vis[child] = 1;
                disSrc[child] = disSrc[cur] + 1;
                q.push(child);
            }
        }
    }
    return 0;
}
void path(int src, int dis)
{
    if (src == dis)
    {
        cout << src << " ";
        return;
    }
    for (int child : v[dis])
    {
        if (disSrc[child] == disSrc[dis] - 1)
        {
            path(src, child);
            cout << dis << " ";
            return;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(disSrc, -1, sizeof(disSrc));
    memset(vis, 0, sizeof(vis));
    int flag = !bfs(1, n);
    if (flag == 1)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << disSrc[n] + 1 << endl;
        path(1, n);
        cout << endl;
    }
    return 0;
}