
// recursion 1 to 10 print
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void number(ll n)
{
    if (n <= 10)
    {
        cout << n << endl;
        number(n + 1);
    }
}
int main()
{
    number(1);
    return 0;
}