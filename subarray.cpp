#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,2,3,5,5,3};
    int size=sizeof(arr)/sizeof(int);
    for(int start=0;start<size;start++)
    {
        for(int end=start;end<size;end++)
        {
            for(int i=start;i<=end;i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}