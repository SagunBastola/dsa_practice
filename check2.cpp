#include<vector>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void helper(int x,int n,int start,int& sum)
{
    if(x==0)
    {
        sum++;
        return;
    }
    for(int i=start;pow(i,n)<=x;i++)
    {
        helper(x-pow(i,n),n,i+1,sum);
    }
}
int powerSum(int X, int N) {
    int sum=0;
    helper(X,N,1,sum);
    return sum;
}
int main()

{
    cout<<powerSum(100,3);
    return -1;
}