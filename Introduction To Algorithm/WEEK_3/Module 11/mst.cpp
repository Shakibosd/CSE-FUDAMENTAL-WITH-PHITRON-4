/*
5 7
0 1 2
0 2 3
0 3 3
3 4 6
2 4 4
2 1 7
1 4 5
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 45;
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
class edge
{
public:
    int a, b, c;
    edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int cmp(edge a, edge b)
{
    return a.c < b.c;
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<edge> edgeL;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeL.push_back(edge(a, b, c));
    }

    sort(edgeL.begin(), edgeL.end(), cmp);
    int ttlC = 0;
    for (edge ed : edgeL)
    {
        int ldrA = dsu_find(ed.a);
        int ldrB = dsu_find(ed.b);
        if (ldrA == ldrB)
        {
            continue;
        }
        else
        {
            dsu_union_by_size(ed.a, ed.b);
            ttlC += ed.c;
        }
    }
    cout << ttlC << endl;
    return 0;
}