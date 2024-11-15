
/*
4 5
1 0 5
0 2 6
3 0 8
2 3 7
3 2 7
*/


#include <bits/stdc++.h>
using namespace std;

void convert(int n, vector<pair<int, int>> adj[])
{
    int mt[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mt[i][j] = -1;
            if (i == j)
            {
                mt[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> child : adj[i])
        {
            int cldN = child.first;
            int cst = child.second;
            mt[i][cldN] = cst;
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
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    convert(n, v);
    return 0;
}