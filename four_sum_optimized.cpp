#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
    vector<vector<int>> vec;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    if(n < 4) return vec;
    for(int i=0;i<n-3;i++)
    {
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        while(j<n-2)
        {
            int p=j+1;
            int q=n-1;
            while(p<q)
            {
                long long int sum=(long long)arr[i]+arr[j]+arr[q]+arr[p];
                if(sum==target)
                {
                    vec.push_back({arr[i], arr[j], arr[p], arr[q]});
                    p++;
                    q--;
                    while(p < q && arr[p] == arr[p-1]) p++;
                    while(p < q && arr[q] == arr[q+1]) q--;
                }
                else if(sum<target)
                {
                    p++;
                }
                else
                {
                    q--;
                }
            }

            j++;
            while(j<n-2 && arr[j]==arr[j-1]) j++;
            
        }
    }
    return vec;
}
};