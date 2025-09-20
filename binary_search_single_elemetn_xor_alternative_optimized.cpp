int singleNonDuplicate(int* nums, int numsSize) {
    int start=0;
    int end=numsSize-1;
    int mid;
    if(numsSize==1)
    {
        return nums[0];
    }
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid==0 && nums[0]!=nums[1])
        {
            return nums[0];
        }
        else if(mid==numsSize-1 && nums[mid]!=nums[mid-1])
        {
            return nums[mid];
        }
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
        {
            return nums[mid];
        }
        if(mid%2==0)//even
        {
            if(nums[mid]==nums[mid-1])
            {
                end=mid;
            }
            else
            {
                start=mid;
            }
        }
        else//odd
        {
            if(nums[mid]==nums[mid-1])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}