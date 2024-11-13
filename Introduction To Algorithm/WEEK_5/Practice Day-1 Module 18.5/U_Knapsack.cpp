
/*
There are N
 items numbered from 1 to N
. The ith
 item has a weight of wi
 and a value of vi
.

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
inputCopy
3 8
3 30
4 50
5 60
outputCopy
90
inputCopy
6 15
6 5
5 6
6 4
6 6
3 5
7 2
outputCopy
17
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e3 + 3;

ll Knapsack_Recursion(ll idx, ll cap, vector<ll> wig, vector<ll> val)
{
    if (idx < 0 || cap <= 0)
    {
        return 0;
    }
    if (wig[idx] > cap)
    {
        return Knapsack_Recursion(idx - 1, cap, wig, val);
    }
    ll include = val[idx] + Knapsack_Recursion(idx - 1, cap - wig[idx], wig, val);
    ll exclude = Knapsack_Recursion(idx - 1, cap, wig, val);
    return max(include, exclude);
}

int main()
{
    int N, W;
    cin >> N >> W;
    vector<ll> wig(N);
    vector<ll> val(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> wig[i] >> val[i];
    }
    ll ans = Knapsack_Recursion(N - 1, W, wig, val);
    cout << ans << endl;
    return 0;
}