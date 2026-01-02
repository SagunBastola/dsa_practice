#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> s;
        for(int val : nums)
        {
            if(s.find(val) != s.end())
            {
                return val;

            }
            s.insert(val);
        }
        return -1;
    }
};
int main()
{
    vector<int> num={1,2,3,2,4};
    Solution s1;
    cout<<s1.repeatedNTimes(num);
}