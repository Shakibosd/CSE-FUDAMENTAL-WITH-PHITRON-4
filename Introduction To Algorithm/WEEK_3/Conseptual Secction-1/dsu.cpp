
/*
8 7
7 8
6 7
5 6
4 5
3 4
2 3
1 2
 */
#include <bits/stdc++.h>
using namespace std;
int p[100];
int level[100];
int grpSz[100];

void initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        p[i] = -1;
        level[i] = 0;
        grpSz[i] = 1;
    }
}

// int find(int n)
// {
//     while (parent[n] != -1)
//     {
//         cout <<"Calling" << endl;
//         n = parent[n];
//     }
//     return n;
// }

int find(int n)
{
    int leader = n;
    while (p[leader] != -1)
    {
        cout << "Calling" << endl;
        leader = p[leader];
    }
    // backtracking
    while (n != leader)
    {
        int next = p[n];
        p[n] = leader;
        n = next;
    }
    return leader;
}

// naive aproach
void dsu_union(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (leaderA != leaderB)
    {
        p[leaderB] = leaderA;
    }
}

void dsu_union_by_rank(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (leaderA != leaderB)
    {
        if (level[leaderA] > level[leaderB])
        {
            p[leaderB] = leaderA;
        }
        else if (level[leaderB] > level[leaderA])
        {
            p[leaderA] = leaderB;
        }
        else
        {
            p[leaderA] = leaderB;
            level[leaderB]++;
        }
    }
}

void dsu_union_by_size(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    if (leaderA != leaderB)
    {
        if (grpSz[leaderA] > grpSz[leaderB])
        {
            p[leaderB] = leaderA;
            grpSz[leaderA] += grpSz[leaderB];
        }
        else
        {
            p[leaderA] = leaderB;
            grpSz[leaderB] += grpSz[leaderA];
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    initialize(n);
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        dsu_union(u, v);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << ' ';
    }
    cout << endl;
    cout << find(8) << endl;
    cout << "-------------" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << "";
    }
    cout << endl;
    cout << find(8) << endl;
    cout << find(8) << endl;
    cout << find(8) << endl;
    return 0;
}
