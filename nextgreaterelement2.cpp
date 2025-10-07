#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums2) {
        vector<int> vec(nums2.size(),-1);
        stack<int> s;
        
        int n=nums2.size();
        for(int i=2*n-1;i>=0;i--)
        {
            while(s.size()>0 && nums2[s.top()]<=nums2[i%n])
            {
                s.pop();
            }
            vec[i%n]=s.empty()?-1:nums2[s.top()];
            s.push(i%n);
        }
    return vec;
    }
    
};
int main()
{
    return 0;
}