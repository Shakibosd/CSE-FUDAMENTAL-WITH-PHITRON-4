#include <bits/stdc++.h>

class minStack
{

public:
    stack<int> data;
    stack<int> min;

public:
    void push(int x)
    {
        data.push(x);
        if (min.empty() || x <= min.top())
        {
            min.push(x);
        }
    }

    int pop()
    {
        if (data.empty())
        {
            return -1;
        }
        int x = data.top();
        data.pop();
        if (x == min.top())
        {
            min.pop();
        }
        return x;
    }

    int top()
    {
        if (data.empty())
        {
            return -1;
        }
        return data.top();
    }

    int getMin()
    {
        if (min.empty())
        {
            return -1;
        }
        return min.top();
    }
};