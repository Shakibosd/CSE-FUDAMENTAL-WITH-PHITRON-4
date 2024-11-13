
/*
Berland Government decided to improve relations with neighboring countries. First of all, it was decided to build new roads so that from each city of Berland and neighboring countries it became possible to reach all the others. There are n cities in Berland and neighboring countries in total and exactly n - 1 two-way roads. Because of the recent financial crisis, the Berland Government is strongly pressed for money, so to build a new road it has to close some of the existing ones. Every day it is possible to close one existing road and immediately build a new one. Your task is to determine how many days would be needed to rebuild roads so that from each city it became possible to reach all the others, and to draw a plan of closure of old roads and building of new ones.

Input
The first line contains integer n (2 ≤ n ≤ 1000) — amount of cities in Berland and neighboring countries. Next n - 1 lines contain the description of roads. Each road is described by two space-separated integers ai, bi (1 ≤ ai, bi ≤ n, ai ≠ bi) — pair of cities, which the road connects. It can't be more than one road between a pair of cities. No road connects the city with itself.

Output
Output the answer, number t — what is the least amount of days needed to rebuild roads so that from each city it became possible to reach all the others. Then output t lines — the plan of closure of old roads and building of new ones. Each line should describe one day in the format i j u v — it means that road between cities i and j became closed and a new road between cities u and v is built. Cities are numbered from 1. If the answer is not unique, output any.

Examples
input
2
1 2
output
0
input
7
1 2
2 3
3 1
4 5
5 6
6 7
output
1
3 1 3 7
*/
#include <bits/stdc++.h>

#define ll long long
#define pi pair<ll, ll>

using namespace std;

const ll N = 1e5 + 5;

ll p[N];
ll grp_sz[N];

void dsu_initialize(ll n)
{
    for (ll i = 1; i <= n; i++)
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

void dsu_union_by_size(ll nd1, ll nd2)
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

int main()
{
    ll n;
    cin >> n;
    dsu_initialize(n);

    vector<pi> bad;
    vector<pi> cre;
    for (int i = 1; i <= n - 1; i++)
    {
        ll a, b;
        cin >> a >> b;
        ll ldrA = dsu_find(a);
        ll ldrB = dsu_find(b);
        if (ldrA == ldrB)
        {
            bad.push_back({a, b});
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    cout << bad.size() << endl;
    for (ll i = 2; i <= n; i++)
    {
        ll ldrA = dsu_find(1);
        ll ldrB = dsu_find(i);
        if (ldrA != ldrB)
        {
            cre.push_back({1, i});
            dsu_union_by_size(1, i);
        }
    }
    for (ll i = 0; i < bad.size(); i++)
    {
        cout << bad[i].first << " " << bad[i].second << " " << cre[i].first << " " << cre[i].second << endl;
    }
    return 0;
}
