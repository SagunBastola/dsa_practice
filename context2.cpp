#include <bits/stdc++.h>
using namespace std;
int cake(int a,int b)
{
    int count=0;
    int record=0;
    int r=1;
    while(a>=0 && b>=0)
    {
        if(record==0)
        {
            a=a-r;
            r=r*2;
            record=1;
            if(a>=0){
            count++;}
        }
        else{
            b=b-r;
            r=r*2;
            record=0;
            if(b>=0)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a;
        int b;
        cin>>a;
        cin>>b;
        int r1=cake(a,b);
        int r2=cake(b,a);
        int result=max(r1,r2);
        cout<<result<<endl;
    }
}