#include<iostream>
using namespace std;
int main()
{
    int mat[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int max1=INT_MIN;
    for(int j=0;j<3;j++)
    {   int sum=0;
        for(int i=0;i<3;i++)
        {
            sum+=mat[i][j];
        }
        max1=max(max1,sum);
    }
    cout<<max1;
    return 1;
}