/*
6 6
0 1
1 5
0 4
0 3
3 4
2 4
*/

// দুইটা নোডের মাঝখানে কানেকশন আছে কী নাই থাকলে তা ওয়েট কত সেট করতে পারে সেটা ভেক্টর।
// কোনো একটা নোডের সাথে কারা কারা কানেক্টেড এইটা লিস্ট

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mt[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mt[a].push_back(b);
        mt[b].push_back(a);
    }
    vector<int> v;
    for (int x : mt[1])
    {
        cout << x << " ";
    }

    // for (int i = 0; i < mt[1].size(); i++)
    // {
    //     cout << mt[1][i] << " ";
    // }
    return 0;
}