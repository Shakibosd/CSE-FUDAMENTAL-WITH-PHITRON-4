
/*
4 4
0 1 10
1 2 12
2 3 20
3 1 15
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
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
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        mt[a][b] = c;
        mt[b][a] = c;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}