/*
4 4
0 2 5
0 3 12
2 1 2
1 3 3
*/

/*
negative value
4 4
1 3 -3
0 3 5
2 1 1
0 2 -2
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

const int N = 1e5 + 5;
int des[N];

int main()
{
    int n, e;
    cin >> n >> e;
    vector<edge> edgeList;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(edge(a, b, c));
        for (int i = 0; i < n; i++)
        {
            des[i] = INT_MAX;
        }
        des[0] = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            for (edge ed : edgeList)
            {
                int a, b, c;
                a = ed.a;
                b = ed.b;
                c = ed.c;
                if (des[a] < INT_MAX && des[a] + c < des[b])
                {
                    des[b] = des[a] + c;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << des[i] << endl;
    }
    return 0;
}
