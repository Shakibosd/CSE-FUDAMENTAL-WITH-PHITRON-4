// O(N) -> O(logN) -> O(αN)

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
int p[N];
int grp_sz[N];
int l[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = -1;
        grp_sz[i] = 1;
        l[i] = 0;
    }
}

int dsu_find(int nd)
{
    if (p[nd] == -1)
    {
        return nd;
    }
    int ldr = dsu_find(p[nd]);
    p[nd] = ldr;
    return ldr;
}

void dsu_union(int nd1, int nd2)
{
    int ldrA = dsu_find(nd1);
    int ldrB = dsu_find(nd2);
    p[ldrA] = ldrB;
}

void dsu_union_by_level(int nd1, int nd2)
{
    int ldrA = dsu_find(nd1);
    int ldrB = dsu_find(nd2);
    if (l[ldrA] > l[ldrB])
    {
        p[ldrB] = ldrA;
    }
    else if (l[ldrB] > l[ldrA])
    {
        p[ldrA] = ldrB;
    }
    else
    {
        p[ldrA] = ldrB;
        l[ldrB]++;
    }
}

void dsu_union_by_sz(int nd1, int nd2)
{
    int ldrA = dsu_find(nd1);
    int ldrB = dsu_find(nd2);
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
    dsu_initialize(7);
    dsu_union_by_level(1, 2);
    dsu_union_by_level(2, 3);
    dsu_union_by_level(4, 5);
    dsu_union_by_level(5, 6);
    dsu_union_by_level(1, 4);
    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;
    return 0;
}