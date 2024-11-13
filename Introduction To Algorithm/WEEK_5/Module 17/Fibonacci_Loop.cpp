
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll first = 0, second = 1, fibo, cnt = 0, n;
    cin >> n;
    while (cnt < n)
    {
        if (cnt <= 1)
        {
            fibo = cnt;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        cout << fibo << endl;
        cnt++;
    }
    return 0;
}