/*
negative value
3 3
0 1 -1
1 2 2
2 0 -3
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
    for (int i = 0; i < e; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(edge(a, b, c));
    }
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
    int cycle = 0;
    for (edge ed : edgeList)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (des[a] < INT_MAX && des[a] + c < des[b])
        {
            cycle = 1;
            break;
        }
    }
    if (cycle == 1)
    {
        cout << "Cycle Found" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << des[i] << endl;
        }
    }
    return 0;
}
