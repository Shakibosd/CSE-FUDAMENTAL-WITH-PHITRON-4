
/*Input
The first input line has two integers n and m: the number of cities and roads. The cities are numbered 1,2,\dots,n.
After that, there are m lines describing the roads. Each line has two integers a and b: there is a road between those cities.
A road always connects two different cities, and there is at most one road between any two cities.
Output
First print an integer k: the number of required roads.
Then, print k lines that describe the new roads. You can print any valid solution.
Constraints

1 \le n \le 10^5
1 \le m \le 2 \cdot 10^5
1 \le a,b \le n

Example
Input:
4 2
1 2
3 4

Output:
1
2 3*/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<int> vis;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (int child : v[cur])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    v.resize(n + 1);
    vis.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> ve;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
            ve.push_back(i);
        }
    }
    int rods = ve.size() - 1;
    cout << rods << endl;
    for (int i = 0; i < ve.size() - 1; i++)
    {
        cout << ve[i] << " " << ve[i + 1] << endl;
    }
    return 0;
}
