
/*There are N
 items numbered from 1 to N
. The ith
 item has a weight of wi
 and a value of vi

You have to choose some items out of the N
 items and carry them home in a knapsack. The capacity of the knapsack is W
 which donate the maximum weight that can be carried inside the knapsack. In other words, W
 means the total summation of all weights of items that can be carried in the knapsack.

Print maximum possible sum of values of items that you can take home.

Note: Solve this problem using recursion.

Input
First line contains two numbers N
 and W
 (1≤N≤20,1≤W≤100)
 number of items and the capacity of the knapsack.

Next N
 lines will contain two numbers wi
 and vi
 (1≤wi≤50,1≤vi≤1000)
Output
Print maximum possible sum of values of items that you can take home.

Examples
input
3 8
3 30
4 50
5 60
output
90
input
6 15
6 5
5 6
6 4
6 6
3 5
7 2
output
17*/

#include <bits/stdc++.h>
using namespace std;

int knapsack(int idx, int cap, vector<int> weig, vector<int> val)
{
    if (idx < 0 || cap <= 0)
    {
        return 0;
    }
    if (weig[idx] > cap)
    {
        return knapsack(idx - 1, cap, weig, val);
    }
    int include = val[idx] + knapsack(idx - 1, cap - weig[idx], weig, val);
    int exclude = knapsack(idx - 1, cap, weig, val);
    return max(include, exclude);
}
int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> weig(n);
    vector<int> val(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weig[i] >> val[i];
    }
    cout << knapsack(n - 1, w, weig, val) << endl;
    return 0;
}
