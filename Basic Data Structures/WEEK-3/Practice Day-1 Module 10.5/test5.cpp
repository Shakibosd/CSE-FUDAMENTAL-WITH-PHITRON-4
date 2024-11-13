/*Question: Take a doubly linked list as input and sort it in ascending order. Then print the list.



Sample Input
Sample Output
1 4 5 2 7 -1
1 2 4 5 7
20 40 30 10 50 60 -1
10 20 30 40 50 60

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> LinkedList;
    int value;
    while (cin >> value && value != -1)
    {
        LinkedList.push_back(value);
    }
    LinkedList.sort();
    for (auto val : LinkedList)
    {
        cout << val << " ";
    }
    return 0;
}
