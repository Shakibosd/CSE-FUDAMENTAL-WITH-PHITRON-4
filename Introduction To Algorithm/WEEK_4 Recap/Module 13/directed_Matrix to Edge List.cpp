
/*
4
1 10 -1 -1
-1 1 11 -1
-1 -1 1 12
-1 13 12 0
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mt[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mt[i][j];
        }
    }
    vector<pair<int, int>> edgeList;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mt[i][j] > 0)
            {
                edgeList.push_back({i, j});
            }
        }
    }
    for (pair<int, int> ed : edgeList)
    {
        cout << ed.first << " " << ed.second << endl;
    }
    return 0;
}