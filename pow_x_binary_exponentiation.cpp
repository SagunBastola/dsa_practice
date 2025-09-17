#include<iostream>
using namespace std;
double myPow(double x, int n) {
    long binform=n;
    double ans=1;
    if(binform<0)
    {
        binform=-1*binform;
        x=1/x;
    }
    while(binform>0)
    {
        if(binform%2==1)
        {
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    return ans;
}
int main()
{
    cout << myPow(2,3.1) << endl;   // prints 8
    return 0;
}