/*Given two arrays A
 and B
 of size N
. Print a new array C
 that holds the concatenation of array B
 followed by array A
.

Note: Solve this problem using function.

Input
First line will contain a number N
 (1≤N≤103)
.

Second line will contain N
 numbers (1≤Ai≤105)
 array A
 elements.

Third line will contain N
 numbers (1≤Bi≤105)
 array B
 elements.

Output
Print array C
 elements separated by space.

Example
input
2
1 2
3 4
output
3 4 1 2*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = n - 1; i >= 0; i--)
    {
        getline(cin, v[i]);
    }
    for (string val : v)//Range Bage for loop
    {
        cout << val << " ";
    }
    return 0;
}