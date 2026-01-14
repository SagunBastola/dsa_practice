#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        int sign = 1;
        long long d = dividend;
        long long div = divisor;
        if (dividend < 0)
        {
            sign *= -1;
            d *= -1;
        }
        if (divisor < 0)
        {
            sign *= -1;
            div *= -1;
        }
        long long ans = 0;
        while (d >= div)
        {
            long long cnt = 0;
            while (d >= (div << (cnt + 1)))
            {
                cnt++;
            }
            ans += (1ll << cnt);
            d -= div * (1ll << cnt);
        }
        if (ans > INT_MAX)
            return sign > 0 ? INT_MAX : INT_MIN;

        return ans * sign;
    }
};
int main()
{
    Solution s1;
    cout << s1.divide(10, 3);
}