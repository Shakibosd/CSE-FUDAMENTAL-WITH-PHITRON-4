
/*
4
1 10 -1 -1
-1 1 11 -1
-1 -1 1 12
-1 13 12 0
*/

#include <bits/stdc++.h>
using namespace std;
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
    vector<edge> edgeList;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mt[i][j] > 0)
            {
                edgeList.push_back(edge(i, j, mt[i][j]));
            }
        }
    }
    for (edge ed : edgeList)
    {
        cout << ed.a << " " << ed.b << " " << ed.c << endl;
    }
    return 0;
}