
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, num, tmp, r;
    cin >> num;
    tmp = num;
    while (tmp != 0)
    {
        r = tmp % 10;
        sum = sum + r * r * r;
        tmp = tmp / 10;
    }
    if (sum == num)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "No Armstrong Number" << endl;
    }
    return 0;
}