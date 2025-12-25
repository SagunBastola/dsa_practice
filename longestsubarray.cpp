#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    
	// Creating an object of Solution class
	Solution sol;

	/* Function call to find the length
	of longest subarray having sum k */
	int ans = sol.longestSubarray(nums, k);

	cout << "The length of longest subarray having sum k is: " << ans;

	return 0;
}