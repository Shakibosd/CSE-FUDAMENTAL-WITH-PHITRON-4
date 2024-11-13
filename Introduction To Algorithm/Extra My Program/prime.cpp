
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            break;
        }
    }
    while (1)
    {
        if (cnt == 0)
        {
            cout << "Prime Number" << endl;
            break;
        }
        else
        {
            cout << "No Prime" << endl;
            break;
        }
    }
    return 0;
}