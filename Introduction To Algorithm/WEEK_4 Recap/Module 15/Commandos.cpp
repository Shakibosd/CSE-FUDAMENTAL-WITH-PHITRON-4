
/*A group of commandos were assigned a critical task. They are to destroy an enemy headquarter. The enemy head quarter consists of several buildings and the buildings are connected by roads. The commandos must visit each building and place a bomb at the base of each building. They start their mission at the base of a particular building and from there they disseminate to reach each building. The commandos must use the available roads to travel between buildings. Any of them can visit one building after another, but they must all gather at a common place when their task in done. In this problem, you will be given the description of different enemy headquarters. Your job is to determine the minimum time needed to complete the mission. Each commando takes exactly one unit of time to move between buildings. You may assume that the time required to place a bomb is negligible. Each commando can carry unlimited number of bombs and there is an unlimited supply of commando troops for the mission.

Input
Input starts with an integer T (≤50), denoting the number of test cases.

The first line of each case starts with a positive integer N (1 ≤ N ≤ 100), where N denotes the number of buildings in the headquarter. The next line contains a positive integer R, where R is the number of roads connecting two buildings. Each of the next R lines contain two distinct numbers u v (0 ≤ u, v < N), this means there is a road connecting building u to building v. The buildings are numbered from 0 to N-1. The last line of each case contains two integers s d (0 ≤ s, d < N). Where s denotes the building from where the mission starts and d denotes the building where they must meet. You may assume that two buildings will be directly connected by at most one road. The input will be given such that, it will be possible to go from any building to another by using one or more roads.

Output
For each case, print the case number and the minimum time required to complete the mission.

Sample
Input	Output
2
4
3
0 1
2 1
1 3
0 3
2
1
0 1
1 0

Case 1: 4
Case 2: 1*/
#include <bits/stdc++.h>
using namespace std;
const int N = INT_MAX;

typedef vector<vector<int>> Graph;

vector<int> bfs(Graph g, int src)
{
    int n = g.size();
    vector<int> dis(n, N);
    queue<int> q;
    dis[src] = 0;
    q.push(src);
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int v : g[p])
        {
            if (dis[v] == N)
            {
                dis[v] = dis[p] + 1;
                q.push(v);
            }
        }
    }
    return dis;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, m;
        cin >> n >> m;
        Graph v(n);
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int s, d;
        cin >> s >> d;
        vector<int> distS = bfs(v, s);
        vector<int> distD = bfs(v, d);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int total = distS[i] + distD[i];
            mx = max(mx, total);
        }
        cout << "Case " << i << ": " << mx << endl;
    }
    return 0;
}
