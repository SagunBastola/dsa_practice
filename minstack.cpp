#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class MinStack
{
    stack<int> s;
    int minvalue;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        if (val < minvalue)
        {
            s.push(val + (val - minvalue));
        }
        else
        {
            s.push(val);
        }
    }

    void pop()
    {
        if (s.top() < minvalue)
        {
            minvalue = 2 * minvalue - s.top();
        }
        s.pop();
    }

    int top()
    {
        if (s.top() < minvalue)
        {
            return minvalue;
        }
        else
        {
            return s.top();
        }
    }

    int getMin()
    {
        return minvalue;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */