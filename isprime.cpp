#include<vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool> isprime(n+1,true);
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 0;
        }
        for(int i=2;i<n;i++)
        {
            if(isprime[i]==true)
            {
                count++;
            }
            for(int j=i*2;j<n;j+=i)
            {
                isprime[j]=false;
            }
        }
        return count;
    }
};