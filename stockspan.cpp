#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{   
    vector<int> arr={100,80,60,70,60,75,85};
    vector<int> ans;
    stack<int> s;
    for(int i=0;i<arr.size();i++)
    {
        while(s.size()>0 && arr[s.top()]<=arr[i])
        {
            s.pop();
        }
        if(s.size()==0)
        {
            ans.push_back(i+1);
        }
        else{
            ans.push_back(i-s.top());
        }
        s.push(i);
    }
    for(int val: ans)
    {
        cout<<val<<" ";
    }

    return 0;
}