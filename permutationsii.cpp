    #include<iostream>
    #include<vector>
    #include<unordered_set>
    using namespace std;
    void permutation(vector<int>& arr,vector<vector<int>>& ans,int idx)
    {
        if(idx==arr.size())
        {
            ans.push_back(arr);
            for(int val:arr)
            {
                cout<<val<<" ";
            }
            cout<<endl;
            return;
        }
        unordered_set<int> used;
        for(int i=idx;i<arr.size();i++)
        {
            if(used.find(arr[i])!=used.end()) continue;
            used.insert(arr[i]);
            swap(arr[idx],arr[i]);
            permutation(arr,ans,idx+1);
            
            swap(arr[idx],arr[i]);
        }
    }
    int main()
    {
        vector<int> vec={1,2,2};
        vector<vector<int>> ans;
        permutation(vec,ans,0);
        return 0;
    }
