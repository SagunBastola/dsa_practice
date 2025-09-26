#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> s;
    s.push(3);
    s.push(9);
    s.push(4);
    s.push(8);
    s.push(5);
    s.pop();
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    priority_queue<int,vector<int>,greater<int>> q;
    q.push(3);
    q.push(9);
    q.push(4);
    q.push(8);
    q.push(5);
    q.pop();
    cout<<endl;
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}