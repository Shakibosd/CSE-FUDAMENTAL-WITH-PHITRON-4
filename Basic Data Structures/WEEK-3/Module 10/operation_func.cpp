#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 50, 60, 70, 10, 10, 30, 10, 10};
    // myList.remove(10);
    //  myList.sort();
    // myList.sort(greater<int>());
    //  myList.unique();
    myList.reverse();
    // cout<<myList.back();
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}