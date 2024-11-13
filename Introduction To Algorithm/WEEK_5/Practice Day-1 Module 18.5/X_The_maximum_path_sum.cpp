
/*
Given a matrix A
 of size N
*M
. Print the maximum sum of numbers that can be obtained when you take a path from A1,1
 to AN,M
.

If you stay in Ai,j
 you can only go to :

Ai+1,j
 if and only if i≤N
Ai,j+1
 if and only if j≤M
Note: Solve this problem using recursion.

Input
First line contains two numbers N
 and M
 (1≤N,M≤10)
 N
 donates number of rows and M
 donates number of columns.

Next N
 lines each of them will contain M
 numbers (−105≤Ai,j≤105)
.

Output
Print the maximum sum of numbers can be obtained.

Example
inputCopy
3 3
5 2 4
1 3 5
9 2 7
outputCopy
24
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MN = INT_MIN;
const ll N = 1e5 + 5;

ll maxSumPath(vector<vector<ll>> mt, ll row, ll col)
{
    if (row == mt.size() - 1 && col == mt[0].size() - 1)
    {
        return mt[row][col];
    }
    ll sum = mt[row][col];
    ll Dsum = MN, Rsum = MN;
    if (row + 1 < mt.size())
    {
        Dsum = maxSumPath(mt, row + 1, col);
    }
    if (col + 1 < mt[0].size())
    {
        Rsum = maxSumPath(mt, row, col + 1);
    }
    return sum + max(Dsum, Rsum);
}

int main()
{
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> mt(N, vector<ll>(M));
    for (ll i = 0; i < N; i++)
    {
        for (ll j = 0; j < M; j++)
        {
            cin >> mt[i][j];
        }
    }
    int ans = maxSumPath(mt, 0, 0);
    cout << ans << endl;
    return 0;
}
