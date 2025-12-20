#include<iostream>
using namespace std;
int solve(int legs)
{
    int count=0;
    for(int cows=0;cows*4<=legs;cows++)
    {
        if((legs-4*cows)%2 == 0)
        {
            count++;
        }
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