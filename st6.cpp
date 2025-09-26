#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> s    ;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    while(!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
    cout<<endl<<s.empty()<<endl;
    cout<<s.size()<<endl;
    queue<int> s1;
    s1.swap(s);
    cout<<s.size()<<endl;
    cout<<s1.size()<<endl;

    return 0;
}

