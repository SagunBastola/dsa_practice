#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    const int MOD = 1e9 + 7;
    int helper(int index, int n) {
        if (index == n) {
            return 1;
        }
        int result = 0;
        if (index % 2 == 0) {
            for (int i = 0; i < 5; i++) {
                result = (result + helper(index + 1, n)) % MOD;
            }
        } else {
            for (int i = 0; i < 4; i++) {
                result = (result + helper(index + 1, n)) % MOD;
            }
        }
        return result;
    }
    int countGoodNumbers(long long n) { return helper(0, n); }
};
int main()
{
    Solution s1;
    
    int n;

    cin>>n;
    cout<<s1.countGoodNumbers(n);
}