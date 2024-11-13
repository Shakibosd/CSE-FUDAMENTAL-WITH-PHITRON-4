
/*
Given a number N
. Initially you have a value equal 1 and you can perform one of the following operation any number of times:

Multiply your current value by 10.
Multiply your current value by 20.
Determine if your value can reach N
 or not.

Note: Solve this problem using recursion.

Input
First line contains a number T
 (1≤T≤100)
 number of test cases.

Next T
 lines will contain a number N
 (1≤N≤1012)
.

Output
For each test case print "YES" if your value can reach exactly N
 otherwise, print "NO".

Example
inputCopy
5
1
2
10
25
200
outputCopy
YES
NO
YES
NO
YES
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
//value ddfine
const ll T = 1e1 + 1;
const ll N = 1e12 + 12;

ll canReach(ll N)
{
    //base case
    if (N == 1)
    {
        return 1;
    }
    if (N % 10 == 0)
    {
        if (canReach(N / 10))
        {
            return 1;
        }
    }
    if (N % 20 == 0)
    {
        if (canReach(N / 20))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        ll flag = canReach(N);
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}