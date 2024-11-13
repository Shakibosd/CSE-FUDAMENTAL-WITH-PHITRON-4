
/*
A group of commandos were assigned a critical task. They are to destroy an enemy headquarter. The enemy head quarter consists of several buildings and the buildings are connected by roads. The commandos must visit each building and place a bomb at the base of each building. They start their mission at the base of a particular building and from there they disseminate to reach each building. The commandos must use the available roads to travel between buildings. Any of them can visit one building after another, but they must all gather at a common place when their task in done. In this problem, you will be given the description of different enemy headquarters. Your job is to determine the minimum time needed to complete the mission. Each commando takes exactly one unit of time to move between buildings. You may assume that the time required to place a bomb is negligible. Each commando can carry unlimited number of bombs and there is an unlimited supply of commando troops for the mission.

Input
Input starts with an integer T (≤50), denoting the number of test cases.

The first line of each case starts with a positive integer N (1 ≤ N ≤ 100), where N denotes the number of buildings in the headquarter. The next line contains a positive integer R, where R is the number of roads connecting two buildings. Each of the next R lines contain two distinct numbers u v (0 ≤ u, v < N), this means there is a road connecting building u to building v. The buildings are numbered from 0 to N-1. The last line of each case contains two integers s d (0 ≤ s, d < N). Where s denotes the building from where the mission starts and d denotes the building where they must meet. You may assume that two buildings will be directly connected by at most one road. The input will be given such that, it will be possible to go from any building to another by using one or more roads.

Output
For each case, print the case number and the minimum time required to complete the mission.

Sample
Input	
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

Output
Case 1: 4
Case 2: 1
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 105;
vector<int> v[N];
int dis_from_src[N];
int dis_from_des[N];
bool vis[N];

void bfs(int s, int track)
{
    queue<int> q;
    q.push(s);
    if (track == 1)
        dis_from_src[s] = 0;
    else
        dis_from_des[s] = 0;
    vis[s] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                if (track == 1)
                    dis_from_src[child] = dis_from_src[par] + 1;
                else
                    dis_from_des[child] = dis_from_des[par] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
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
        int s, d;
        cin >> s >> d;
        memset(vis, false, sizeof(false));
        memset(dis_from_src, -1, sizeof(dis_from_src));
        bfs(s, 1);
        for (int i = 0; i < n; i++)
        {
            vis[i] = false;
        }
        memset(dis_from_des, -1, sizeof(dis_from_des));
        bfs(d, 2);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val = dis_from_src[i] + dis_from_des[i];
            ans = max(ans, val);
        }
        cout << "Case " << cs++ << ": " << ans << endl;
        for (int i = 0; i < n; i++)
        {
            v[i].clear();
        }
    }
    return 0;
}