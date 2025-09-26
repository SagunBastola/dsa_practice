#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<s.empty()<<endl;
    cout<<s.size()<<endl;
    stack<int> s1;
    s1.swap(s);
    cout<<s.size()<<endl;
    cout<<s1.size()<<endl;

    return 0;
}