#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    int height[] = {1,8,6,2,5,4,8,3,7};
    int size=sizeof(height)/sizeof(int);
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            int width=j-i;
            int height1=min(height[i],height[j]);
            int watercontained=width*height1;
            ans=max(watercontained,ans);
        }
    }
    cout<<ans;
    return 0;
}