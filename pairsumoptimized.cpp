#include<iostream>
using namespace std;
int main()
{
        int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int target=17;
    int i=0;
    int j=size-1;
    while(i<j)
    {
        int pairsum=arr[i]+arr[j];
        if(pairsum>target)
        {
            j--;
        }
        else if(pairsum<target)
        {
            i++;
        }
        else{
            cout<<arr[i]<<endl<<arr[j]<<endl;
            return 0;
        }
    }
    return 0;
}