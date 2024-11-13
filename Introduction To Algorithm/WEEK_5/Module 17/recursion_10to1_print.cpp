
// recursion 10 to 1 print
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void number(ll n)
{
    if (n >= 1)
    {
        cout << n << endl;
        number(n - 1);
    }
}
int main()
{
    number(10);
    return 0;
}