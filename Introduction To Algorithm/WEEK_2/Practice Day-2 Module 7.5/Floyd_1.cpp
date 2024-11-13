
/*
Input data
The first line contains the number of vertices (1≤n≤100)n (1≤n≤100) in a graph. Each of the next n lines contains n numbers and describes the weighted matrix (the j-th number in the i-th row gives the weight of the edge from vertex i to vertex j). All the numbers by the absolute value do not exceed 100. The numbers on the main diagonal are always zero.

Output data
Print n rows with  n numbers — the matrix of shortest distances between pairs of vertices. The j-th number of the  i-th row must be equal to the weight of the shortest path from vertex i to vertex j.

Examples
Input 
4
0 5 9 100
100 0 2 8
100 100 0 7
4 100 100 0
Output 
0 5 7 13
12 0 2 8
11 16 0 7
4 9 11 0
*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
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
            if (i != j && adj[i][j] == 0)
            {
                adj[i][j] = INT_MAX;
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    int nagetiveCycle = 0;
    for (int i = 0; i < n; i++)
    {
        if (adj[i][i] < 0)
        {
            nagetiveCycle = 1;
            break;
        }
    }
    if (nagetiveCycle == 1)
    {
        cout << "Negative cycle detected" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][j] == INT_MAX)
                {
                    cout << "INF";
                }
                else
                {
                    cout << adj[i][j] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}