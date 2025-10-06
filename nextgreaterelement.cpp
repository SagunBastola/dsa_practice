#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums2)
    {
        vector<int> vec(nums2.size(), 0);
        stack<int> s;
        for (int i = nums2.size() - 1; i >= 0; i--)
        {
            while (s.size() > 0 && s.top() <= nums2[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                vec[i] = -1;
            }
            else
            {
                vec[i] = s.top();
            }
            s.push(nums2[i]);
        }
        return vec;
    }
};
int main()
{
    vector<int> nums2 = {1, 2, 1};
    Solution s1;
    vector<int> n = s1.nextGreaterElements(nums2);
    for (int i : n)
    {
        cout << i << " ";
    }
    return 0;
}