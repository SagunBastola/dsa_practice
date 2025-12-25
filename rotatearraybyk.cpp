#include <bits/stdc++.h>
using namespace std;

    class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

int main()
{
    vector<int> arr = {4,6,1,5,1,-1};
    Solution s1;

    s1.rotate(arr,3);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }

    return 0;
}
