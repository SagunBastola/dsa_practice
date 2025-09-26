#include<iostream>
#include<vector>
using namespace std;
int main()
{
    pair<int,int> p={3,5};
    cout<<p.first<<endl<<p.second<<endl;
    vector<pair<int,int>> vec={{3,4},{5,6}};
    vec.emplace_back(3,7);
    for(auto a : vec)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }
    cout<<endl;
    return 0;
}