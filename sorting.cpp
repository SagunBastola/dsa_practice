#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);

            }
        }
    }
}
void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallestindexx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallestindexx])
            {
                smallestindexx=j;
            }
        }
        swap(arr[i],arr[smallestindexx]);
    }
}
void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
void show(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<' ';
    }
}
int main()
{
    int arr[]={4,6,2,3,5,6};
    int size=sizeof(arr)/sizeof(int);
    insertion(arr,size);
    show(arr,size);
    return 1;
}