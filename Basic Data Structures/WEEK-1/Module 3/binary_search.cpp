/*Given 2 numbers N
 and Q
, array A of N numbers and Q queries each one contains a number X
.

For each query print a single line that contains "found" if the number X
 exists in array A
 otherwise, print "not found".

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
.

Second line contains N
 numbers (1≤Ai≤109)
.

Next Q
 lines contains X
 (1≤X≤109)
.

Output
Print the answer for each query in a single line.

Example
input
5 3
1 5 4 3 2
5
3
6
output
found
found
not found*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)//O(N)
    {
        cin >> a[i];
    }
    sort(a, a + n);//O(nlogn)
    while (q--)//O(Q)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1, flag = 0;
        while (l <= r)//O(Q)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (x > a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}