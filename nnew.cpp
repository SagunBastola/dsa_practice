#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        
        int size=arr.size();
        int count=0;
        vector<int> vec(size);
        vec[0]=arr[0];
        for(int i=1;i<size;i++)
        {   
            vec[i] = vec[i-1] + arr[i];
        }
        unordered_map<int,int> m;
        for(int j=0;j<size;j++)
        {
            int val=vec[j]-k;
            if(vec[j]==k)
            {
                count++;
            }
            if(m.find(val)!=m.end())
            {
                count+=m[val];
            }
            if(m.find(vec[j])==m.end())
            {
                m[vec[j]]=0;
            }
            m[vec[j]]+=1;
        }
        return count;
    }
};