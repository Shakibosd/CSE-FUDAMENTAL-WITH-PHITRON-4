
/*
4 4
1 0
0 2
0 3
2 3
*/

#include <bits/stdc++.h>
using namespace std;

void convert(int n, vector<int> adj[])
{
    int mt[n][n];
    // memset(mt,0,sizeof(mt));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mt[i][j] = 0;
            if (i == j)
            {
                mt[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int child : adj[i])
        {
            mt[i][child] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    convert(n, v);
    return 0;
}