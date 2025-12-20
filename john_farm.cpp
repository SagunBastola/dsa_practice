#include<iostream>
using namespace std;
int solve(int legs)
{
    int count;
    count=legs/4;
    if(legs % 4 ==2)
    {
        count+=1;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int legs;
        cin>>legs;
        cout<<solve(legs)<<endl;
        t--;
    }
}