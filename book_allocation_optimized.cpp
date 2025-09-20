bool isvalid(int arr[],int n,int k,int maxallowedpages)
{
    int student=1;
    int pages=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxallowedpages)
        {
            return false;
        }
        if(pages+arr[i]<=maxallowedpages)
        {
            pages+=arr[i];
        }
        else
        {
            student++;
            pages=arr[i];
        }
        
    }
    if(student<=k)
    {
        return true;
    }
    return false;
}
int findPages(int arr[], int n, int k) {
    if(n<k)
    {
        return -1;
    }
    int start=0;
    int end=0;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        end+=arr[i];
    }
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(isvalid(arr,n,k,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}
