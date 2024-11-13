
/*
Problem Statement

Naim and Sakib are two brothers. Their mom wanted to give a lot of chocolates to them. Their mom brought  boxes of chocolates for them. However, in each box, the number of chocolates is not the same, and their mom didn't know it. Now she is very upset because her children want the whole box, and they also want an equal number of chocolates. So she needs your help.

Can you tell if she could divide those boxes between her children so that both of them get an equal number of chocolates? She can't throw away any boxes, and one box can be taken once.

Input Format

First line will contain , the number of test cases.
First line of each test case will contain .
Second line will contain a list , the number of chocolates in each box.
Constraints

; Here, ; Sum of all numbers won't exceed 
Output Format

Output "YES" if she could divide chocolates into her children, "NO" otherwise.
Sample Input 0

3
5
1 2 3 4 5
4
2 3 4 5
5
1 2 3 8 12
Sample Output 0

NO
YES
YES
*/
#include <bits/stdc++.h>
#define ll long long
#define ve vector<ll>
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        ve v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt += v[i];
        }
        if (cnt % 2 == 0)
        {
            ll ch = cnt / 2;
            ll dp[n + 1][ch + 1];
            dp[0][0] = 1;
            for (ll i = 1; i <= ch; i++)
            {
                dp[0][i] = 0;
            }
            for (ll i = 1; i <= n; i++)
            {
                for (ll j = 0; j <= ch; j++)
                {
                    if (v[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - v[i - 1]] || dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }
            int flag = dp[n][ch];
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}