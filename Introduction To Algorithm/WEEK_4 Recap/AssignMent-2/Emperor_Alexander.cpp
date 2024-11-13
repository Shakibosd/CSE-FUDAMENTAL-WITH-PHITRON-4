
/*
Problem Statement

Emperor Alexander is envisioning an extensive network of roads connecting the  cities in his vast empire. To achieve this, he has devised a plan to construct  roads, each with its construction cost. However, upon closer examination, it has come to his attention that some of these roads may be redundant, leading to unnecessary expenses. He seeks your expertise in identifying these expendable roads and determining the minimum total construction cost to bring his vision to life. If it is impossible to realize this plan, please convey the message by printing "Not Possible".

Could you assist Emperor Alexander in finding the number of roads that can be removed from the plan to optimize costs and in calculating the minimum total construction cost?

Note: There can be multiple roads between two cities in that plan. But there will be no roads from city A to A.

Input Format

First line will contain  and . Each city is numbered from  to .
Next  lines will contain ,  and . Which means there is a road between  and  where construction cost is *.
Constraints

Output Format

Output the number of roads need to remove, then the minimum construction cost to build the plan. If it's not possible print "Not Possible".
Sample Input 0

4 6
1 2 10
2 3 4
3 4 5
4 2 3
4 1 5
1 3 2
Sample Output 0

3 9
Explanation 0

He can build those roads in the following way, so 3 roads will be removed and minimum cost will be 9 to connect all cities.
image

Sample Input 1

4 4
1 2 10
1 3 2
2 1 5
3 1 6
Sample Output 1

Not Possible
Explanation 1

As there is no way to get to the 4th city, so it is not possible to connect all the cities using this plan.
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
ll p[N];
ll grp_sz[N];

void dsu_initialize(ll n)
{
    for (ll i = 0; i < n; i++)
    {
        p[i] = -1;
        grp_sz[i] = 1;
    }
}

ll dsu_find(ll nd)
{
    if (p[nd] == -1)
    {
        return nd;
    }
    ll ldr = dsu_find(p[nd]);
    p[nd] = ldr;
    return ldr;
}

void dsu_union_by_sz(ll nd1, ll nd2)
{
    ll ldrA = dsu_find(nd1);
    ll ldrB = dsu_find(nd2);
    if (grp_sz[ldrA] > grp_sz[ldrB])
    {
        p[ldrB] = ldrA;
        grp_sz[ldrA] += grp_sz[ldrB];
    }
    else
    {
        p[ldrA] = ldrB;
        grp_sz[ldrB] += grp_sz[ldrA];
    }
}

class edge
{
public:
    ll a, b, c;
    edge(ll a, ll b, ll c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

ll cmp(edge a, edge b)
{
    return a.c < b.c;
}

int main()
{
    ll n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<edge> edgeL;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        edgeL.push_back(edge(a, b, c));
    }
    sort(edgeL.begin(), edgeL.end(), cmp);
    ll ttlC = 0;
    ll bad = 0;
    for (edge ed : edgeL)
    {
        ll ldrA = dsu_find(ed.a);
        ll ldrB = dsu_find(ed.b);
        if (ldrA == ldrB)
        {
            bad++;
            continue;
        }
        else
        {
            dsu_union_by_sz(ed.a, ed.b);
            ttlC += ed.c;
        }
    }
    ll ldr = dsu_find(0);
    for (ll i = 1; i < n; i++)
    {
        int ans = dsu_find(i) != ldr;
        if (ans)
        {
            cout << "Not Possible" << endl;
            return 0;
        }
    }
    cout << bad << " " << ttlC << endl;
    return 0;
}
