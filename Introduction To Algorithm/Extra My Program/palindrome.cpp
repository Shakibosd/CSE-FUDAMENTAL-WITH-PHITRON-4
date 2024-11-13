
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, r, sum = 0;
    cin >> num;
    int tmp = num;
    while (tmp != 0)
    {
        r = tmp % 10;
        sum = sum * 10 + r;
        tmp /= 10;
    }
    if (num == sum)
    {
        cout <<num <<" " << "Palindrome" << endl;
    }
    else
    {
        cout <<num <<" " << "No Palindrome" << endl;
    }
    return 0;
}
