/*Given 2 numbers N
 and Q
, an array A
 of N
 number and Q
 number of pairs L
, R
. For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
 where N
 is number of elements in A
 and Q
 is number of query pairs.

Second line contains N
 numbers(1≤Ai≤109)
.

Next Q
 lines contains L,R
 (1≤L≤R≤N)
.

Output
For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.

Examples
input
6 3
6 4 2 7 2 7
1 3
3 6
1 6
output
12
18
28
input
4 3
5 5 2 3
1 3
2 3
1 4
output
12
7
15*/

// O(N+Q)
// O(10^5 + 10^5) = O(10^5) Possible

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    long long a[n];
    for (int i = 0; i < n; i++) // O(N)
    {
        cin >> a[i];
    }
    long long pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++) // O(N)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    while (q--) // O(Q)
    {
        long long l, r, sum = 0;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }
    return 0;
}
