/*
6 6
0 1
0 2
0 3
3 4
3 5
4 5
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int p[N];
int grp_sz[N];

void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = -1;
        grp_sz[i] = 1;
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

void dsu_union_by_size(int nd1, int nd2)
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
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    int Cycle = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int ldrA = dsu_find(a);
        int ldrB = dsu_find(b);
        if (ldrA == ldrB)
        {
            Cycle = 1;
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    if (Cycle == 1)
    {
        cout << "Cycle Found" << endl;
    }
    else
    {
        cout << "No Cyclde" << endl;
    }
    return 0;
}