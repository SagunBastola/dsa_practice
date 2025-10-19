#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxLen = 0;
        unordered_map<int, int> firstSeen;
        unordered_set<int> seen;
        firstSeen[0] = -1;
        int prefix = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (!seen.count(nums[i])) {
                seen.insert(nums[i]);
                if (nums[i] % 2 == 0)
                    prefix += 1;
                else
                    prefix -= 1;
            }

            if (firstSeen.count(prefix)) {
                maxLen = max(maxLen, i - firstSeen[prefix]);
            } else {
                firstSeen[prefix] = i;
            }
        }

        return maxLen;
    }
};


int main()
{
    Solution s1;
    vector<int> arr{10,6,10,7,8};
    cout << s1.longestBalanced(arr);
    return 0;
}