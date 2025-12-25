#include <bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n)
{
    if(n==0 && n==1)
    {
        cout<<-1<<endl;
        return;
    }
    sort(arr,arr+n);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i] != arr[i+1])
        {
            cout<<arr[i]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;

}

int main()
{
    int arr[] = {1,1,1,1,1,1};

    int n = sizeof(arr) / sizeof(arr[0]);

    getElements(arr, n);

    return 0;
}
