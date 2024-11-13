// O(N^3)
/*
negative value
3 3
0 1 -1
1 2 2
2 0 -3
*/

/*
4 6
3 2 8
2 1 5
1 0 2
3 0 20
0 1 3
1 2 2
*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll v[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i][j] = INT_MAX;
            if (i == j)
            {
                v[i][j] = 0;
            }
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a][b] = c;
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i][k] + v[k][j] < v[i][j])
                {
                    v[i][j] = v[i][k] + v[k][j];
                }
            }
        }
    }

    cout << "AFTER" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == INT_MAX)
            {
                cout << "INF";
            }
            else
            {
                cout << v[i][j] << " ";
            }
        }
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i][i] < 0)
    //     {
    //         cout << "Cycle Found" << endl;
    //         break;
    //     }
    // }
    return 0;
}