/*Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
input
4
5 1 3 2
output
2 3 1 5
input
5
1 2 3 4 5
output
5 4 3 2 1*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    return 0;
}