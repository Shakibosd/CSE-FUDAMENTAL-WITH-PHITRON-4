/*Once Bob needed to find the second order statistics of a sequence of integer numbers. Lets choose each number from the sequence exactly once and sort them. The value on the second position is the second order statistics of the given sequence. In other words it is the smallest element strictly greater than the minimum. Help Bob solve this problem.

Input
The first input line contains integer n (1 ≤ n ≤ 100) — amount of numbers in the sequence. The second line contains n space-separated integer numbers — elements of the sequence. These numbers don't exceed 100 in absolute value.

Output
If the given sequence has the second order statistics, output this order statistics, otherwise output NO.

Examples
inputCopy
4
1 2 2 -4
outputCopy
1
inputCopy
5
1 2 3 1 1
outputCopy
2
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() < 2)
    {
        cout << "NO" << endl;
    }
    auto it = s.begin();
    advance(it, 1);
    cout << *it << endl;
    return 0;
}