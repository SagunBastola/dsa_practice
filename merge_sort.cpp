#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    void merge(vector<int>& arr,int start,int end,int mid)
    {
        vector<int> temp;
        int i=start;
        int j=mid+1;
        while(i<=mid && j<=end )
        {
            if(arr[i]<=arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end)
        {
            temp.push_back(arr[j]);
            j++;
        }
        int a=0;
        while(a<temp.size())
        {
            arr[start+a]=temp[a];
            a++;
        }
        
    }
    void mergesort(vector<int>& arr,int start,int end)
    {
        if(start<end)
        {
            int mid=start+(end-start)/2;
            mergesort(arr,start,mid);
            mergesort(arr,mid+1,end);
            merge(arr,start,end,mid);
        }

    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};
int main() {
    vector<int> v = {1, 2, 7, 4, 5};

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout<<endl;
    Solution s1;
    vector<int> a=s1.sortArray(v);

    // Or using a range-based for loop (C++11 and above)
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}