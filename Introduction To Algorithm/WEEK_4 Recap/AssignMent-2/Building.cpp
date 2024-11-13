/*
Problem Statement

You have just opened a ISP business and you want to connect your WIFI lines in your area. In your area there are  buldings and  roads connecting those buildings. The roads are two way obviously. In each road there is a cost of connecting the cables. You want to connect all buldings in such a way that there is connection from any building to another, not necessary to be directly.

As you are a businessman, you want the total cost to be minimum. Can you tell the minimum total cost to do the work?

Note: There can be multiple roads from one building to another. If it is not possible to connect all the building, print . Each building has a number from  to .

Input Format

First line will contain  and .
Next  lines will contain ,  and  which means there is a connection in between  and  where the cost for connecting the cable is .
Constraints

Output Format

Output the minimum cost.
Sample Input 0

5 7
1 2 10
1 3 5
3 2 4
2 4 1
3 4 2
4 5 3
1 5 2
Sample Output 0

8
Sample Input 1

3 2
1 2 10
2 1 2
Sample Output 1

-1
*/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
using namespace std;
const ll N = 1e9 + 9;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<pi>> v(n + 1);
    for (ll i = 0; i < m; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    vector<int> vis(n + 1, 0);
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    pq.push({0, 1});
    ll totalCost = 0;

    while (!pq.empty())
    {
        ll cost = pq.top().first;
        ll p = pq.top().second;
        pq.pop();
        if (vis[p])
        {
            continue;
        }
        vis[p] = 1;
        totalCost += cost;
        for (auto edge : v[p])
        {
            ll x = edge.first;
            ll edge_cost = edge.second;
            if (!vis[x])
            {
                pq.push({edge_cost, x});
            }
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << totalCost << endl;
    return 0;
}
