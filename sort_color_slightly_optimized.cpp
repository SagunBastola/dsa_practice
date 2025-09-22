#include<iostream>
using namespace std;
void show(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<' ';
    }
}
int main()
{
    int arr[]={0,1,0,2,0,2,2,1};
    int num=sizeof(arr)/sizeof(int);
    int count0=0,count1=0,count2=0;
    for(int i=0;i<num;i++)
    {
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else count2++;
    }
    for(int i=0;i<count0;i++)
    {
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++)
    {
        arr[i]=1;
    }
    for(int i=count0+count1;i<count0+count1+count2;i++)
    {
        arr[i]=2;
    }
    show(arr,num);
    return 0;
}