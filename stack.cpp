#include <iostream>
#include <vector>
using namespace std;
class stack
{
private:
    vector<int> vec;
    int index;

public:
    stack()
    {
        vec.resize(100);
        index = -1;
    }
    void push(int val)
    {
        if (index < 100)
        {
            index++;
            vec[index] = val;
        }
        else
        {
            cout << "Error" << endl;
        }
    }
    void pop()
    {
        if (empty())
        {
            cout << "Error not enough";
        }
        else
        {
            index--;
        }
    }
    int top()
    {
        if (!empty())
        {
            return vec[index];
        }
    }
    bool empty()
    {
        if (index == -1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    stack s1;

    s1.push(6);
    s1.push(5);
    s1.pop();
    cout << s1.top();
    return 0;
}