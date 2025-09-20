int search(int* nums, int numsSize, int target) {
    int start=0;
    int end=numsSize-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        //left sorted
        if(nums[start]<=nums[mid])
        {
            if(nums[start] <= target && target <= nums[mid])//left
            {
                end=mid-1;
            }
            else                //right
            {
                start=mid+1;
            }

        }
        //right sorted
        else
        {
            if(nums[mid] <= target && target <= nums[end])//right
            {
                start=mid+1;
            }
            else                           //left
            {
                end=mid-1;
            }

        }
    }
    return -1;
}
