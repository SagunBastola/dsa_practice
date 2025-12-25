#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    if(n==0)
    {
        return;
    }
    if(n==1)
    {
        cout<<arr[0];
        return;
    }
    int a=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=a;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return;

}

int main()
{
    int arr[] = {4,6,1,5,1,-1};

    int n = sizeof(arr) / sizeof(arr[0]);

    rotate(arr, n);

    return 0;
}
