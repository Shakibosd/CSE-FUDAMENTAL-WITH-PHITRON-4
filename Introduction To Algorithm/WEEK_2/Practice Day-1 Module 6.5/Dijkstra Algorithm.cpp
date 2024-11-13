#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, f;
    cin >> n >> s >> f;
    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (graph[i][k] != -1 && graph[k][j] != -1)
                {
                    if (graph[i][j] == -1 || graph[i][j] > graph[i][k] + graph[k][j])
                    {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                }
            }
        }
    }
    if (graph[s - 1][f - 1] == -1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << graph[s - 1][f - 1] << endl;
    }
    return 0;
}
