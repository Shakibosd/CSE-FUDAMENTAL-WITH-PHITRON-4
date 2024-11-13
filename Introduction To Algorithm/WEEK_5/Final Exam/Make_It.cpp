
/*
Problem Statement

You will be given a positive integer . You will start from  and do some steps (possibly zero).

In each step you can choose one of the following:

Add  with the current value
Multiply by  with the current value
Can you tell if you can reach  by using any number of steps you want.

Input Format

First line will contain , the number of test cases.
In each test case you will be given .
Constraints

Output Format

Print "YES" if you can reach , "NO" otherwise.
Sample Input 0

5
1
3
5
15
16
Sample Output 0

YES
NO
YES
NO
YES
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll mk[n + 1];
        memset(mk, 0, sizeof(mk));
        mk[0] = 1;
        for (ll i = 1; i <= n; i++)
        {
            if (i - 3 >= 0 && mk[i - 3])
            {
                mk[i] = 1;
            }
            else if (i % 2 == 0 && mk[i / 2])
            {
                mk[i] = 1;
            }
        }
        int flag = mk[n];
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}

