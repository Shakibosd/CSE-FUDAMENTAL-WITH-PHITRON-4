
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, sum = 0, temp, r, fact;
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        fact = 1;
        for (int i = 1; i <= r; i++)
        {
            fact *= i; 
        }
        sum += fact; 
        temp = temp / 10;
    }
    if (sum == num)
    {
        cout <<num <<" " << "Strong Number" << endl; 
    }
    else
    {
         cout <<num <<" " << "No Strong Number" << endl; 
    }
    return 0;
}
