class Solution {
public:
    long long countBalanced(long long low, long long high) {
        long long int count = 0;
        for (long long int i = low; i < high; i++) {
            long long int odd_sum = 0;
            long long int even_sum = 0;
            long long int num = i;
            long long digit = 0;
            while (num > 0) {
                if (digit % 2 == 0) {
                    odd_sum += 1ll * num % 10;
                } else {
                    even_sum += 1ll * num % 10;
                }
                num = 1ll * num / 10;
            }
            if (odd_sum == even_sum) {
                count++;
            }
        }
        return count;
    }
};