#include<iostream>
#include<deque>//doubly ended queue
using namespace std;
int main()
{
    deque<int> l={1,2};
    for(int val : l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    l.push_back(3);
    l.push_front(4);
    for(int val : l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    l.pop_back();
    for(int val : l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    l.pop_front();
    for(int val : l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<l[0]<<endl; //random acess not possible
    cout<<l.size()<<" " <<endl;
    return 0;
}