#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        string turn="Sakurako";
        int i=1;
        while(abs(sum)<=n)
        {
            if(turn == "Sakurako")
            {
                sum-=(2*i-1);
                turn="Kosuke";
                i++;
            }
            else
            {
                sum+=(2*i-1);
                turn="Sakurako";
                i++;
            }
        }
        if(turn == "Sakurako")
        {
            cout<<"Kosuke"<<endl;
        }
        else{
            cout<<"Sakurako"<<endl;
        }
    }
}