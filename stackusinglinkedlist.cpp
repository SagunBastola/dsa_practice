#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
class stack
{
    private:
    list<int> l;
    public:
    void push(int val)
    {
        l.push_front(val);

    }
    void pop()
    {
        if(l.size()==0)
        {
            cout<<"error in the poping";
            return;
        }
        l.pop_front();
    } 
    int top()
    {
        return l.front();
    }
    bool empty()
    {
        if(l.size()==0)
        {
            return true;
        }
        return  false;
    }

};
int main()
{
    stack s1;
    
    s1.push(6);
    s1.push(5);
    s1.pop();
    cout<<s1.top();
    queue<int> q;
    
    return 0;
}