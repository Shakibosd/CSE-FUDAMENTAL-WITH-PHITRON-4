/*You are given an array a
 of n
 integers, count the number of element ai
 in the array such that ai+1
 is also exists in the array a
 .

If there're duplicates in a
, count them separately.

Input
The first line contains an integer n(1≤n≤103)
 the number of elements in the array a

The second line contains n
 integers ai(0≤Xi≤103)
 the elements of the array a
.

Output
output the number of elements as descriped above.

Examples
input
3
4 4 5
output
2
input
3
1 2 3
output
2
input
8
1 1 3 3 5 5 7 7
output
0
input
6
1 3 2 3 5 0
output
3*/

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
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (find(v.begin(), v.end(), (v[i] + 1)) != v.end())
        {
            s++;
        }
    }
    cout << s << " ";
    return 0;
}
