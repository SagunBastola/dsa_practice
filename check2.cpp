#include<vector>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void helper(int x,int n,int& sum)
{
    int start=1;
    int end=x/2;
    while(start<=end)
    {
        if(pow(start,n)+pow(end,n)==x)
        {
            sum++;
            helper(start,n,sum);
            helper(end,n,sum);
            start++;
            end--;
        }
        else if(pow(start,n)+pow(end,n)<x)
        {
            start++;
        }
        else
        {
            end--;
        }
        
    }
}
int powerSum(int X, int N) {
    int sum=0;
    helper(X,N,sum);
    return sum;
}
int main()

{
    cout<<powerSum(100,3);
    return -1;
}