#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Mashrafe Bin Mortaza"] = 2;
    mp["Musfiqur Rahim"] = 15;
    mp["Tamim Iqbal"] = 28;
    mp["Mahmudullah Riyad"] = 30; // O(logN)
    mp["Shakib Al Hasan"] = 79;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }
    cout << endl;

    cout << mp["Shakib Al Hasan"] << endl;
    cout << endl;
    
    if (mp.count("nokib"))
    {
        cout << "Ase" << endl;
    }
    else
    {
        cout << "Nai" << endl;
    }
    return 0;
}