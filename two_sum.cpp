
#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        vector<int> vec;
        unordered_map<int,int> m;

        for(int i=0;i<arr.size();i++)
        {
            int first=arr[i];
            int second=tar-first;
            if(m.find(second)!=m.end())
            {
                vec.push_back(i);
                vec.push_back(m[second]);
                return vec;
                break;
            }
            m[first]=i;
        }
        return vec;
    }
};