#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s={1,2,3,4,5,6,4,3,2,3,4,45};
    for(int val : s)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<*(s.lower_bound(1))<<endl;
    cout<<*(s.upper_bound(1));
    cout<<endl;
    return 0;
}