#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int arr[] = {1,1,1,1,1,-1};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<sorted(arr, n)<<endl;

    return 0;
}
