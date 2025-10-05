#include<iostream>
#include<vector>
using namespace std;
class stack
{
    private:
    vector<int> vec;
    public:
    void push(int val)
    {
        vec.push_back(val);

    }
    void pop()
    {
        vec.pop_back();
    } 
    int top()
    {
        return vec[vec.size()-1];
    }
    bool empty()
    {
        if(vec.size()==0)
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
    return 0;
}