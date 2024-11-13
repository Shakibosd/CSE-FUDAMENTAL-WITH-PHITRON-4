
/*
Input data
The first line contains the number of vertices n(1≤n≤100) n (1≤n≤100). The next n lines of n numbers describe the weighted matrix. Here −1
−1 means no edges between vertices, and any non-negative number — the presence of an edge of given weight. All elements on the main diagonal are always zero.

Output data
Print the desired maximum shortest distance.

Examples
Input 
4
0 5 9 -1
-1 0 2 8
-1 -1 0 7
4 -1 -1 0
Output 
16
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9;
int main()
{
    ll n;
    cin >> n;
    ll adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adj[i][j];
            if (i != j && adj[i][j] == -1)
            {
                adj[i][j] = N;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] != N && adj[k][j] != N && adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] != N && adj[i][j] > cnt)
            {
                cnt = adj[i][j];
            }
        }
    }
    cout << cnt << endl;
    return 0;
}