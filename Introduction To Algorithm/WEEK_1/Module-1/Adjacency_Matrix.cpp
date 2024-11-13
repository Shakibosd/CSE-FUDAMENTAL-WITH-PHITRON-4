/*
6 6
0 1
1 5
0 4
0 3
3 4
2 4
*/
// jodi ulto dike cannection na thake tahole eta directed graph jodi dui dike thake tahole undericted graph.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    int mt[n][n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mt[a][b] = 1;
        mt[b][a] = 1;
    }
    if (mt[0][2] == 1)
    {
        cout << "Cannection Ase" << endl;
    }
    else
    {
        cout << "Cannection Nai" << endl;
    }
    return 0;
}