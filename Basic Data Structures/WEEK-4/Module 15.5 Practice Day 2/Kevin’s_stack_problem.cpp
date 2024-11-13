#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    stack<char> charStack;
    for (char c : s)
    {
        charStack.push(c);
    }
    string reversedString = "";
    while (!charStack.empty())
    {
        reversedString += charStack.top();
        charStack.pop();
    }
    return reversedString;
}
