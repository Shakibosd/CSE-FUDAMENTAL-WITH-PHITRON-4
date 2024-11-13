#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "No Leap Year" << endl;
    }
    return 0;
}