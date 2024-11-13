
/*
4 5
0 1 10
1 2 11
2 3 12
3 2 12
3 1 13
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
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    vector<edge> edgeList;
    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> child : v[i])
        {
            int childNode = child.first;
            int cost = child.second;
            edgeList.push_back(edge(i, childNode, cost));
        }
    }
    for (edge edge : edgeList)
    {
        cout << edge.a << " " << edge.b << " " << edge.c << endl;
    }
    return 0;
}
