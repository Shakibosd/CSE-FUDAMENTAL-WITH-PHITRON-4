/*Given a string S. Determine how many times does each letter occurred in S.

Input
Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

Output
For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

Note: you must print letters in ascending order.

Examples
input
aaabbc
output
a : 3
b : 2
c : 1
input
regff
output
e : 1
f : 2
g : 1
r : 1*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int cnt[26] = {0};
    while (cin >> c)
    { // EOF->End Of File
        cnt[c - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i - 'a'] > 0)
        {
            cout << i << " : " << cnt[i - 'a'] << endl;
        }
    }
    return 0;
}