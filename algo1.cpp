#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
bool comparator(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.first<p2.first) return true;
    return false;
}
int main()
{
    vector<pair<int,int>> vec={{2,3},{4,5},{1,2},{6,4},{2,3},{4,3}};
    sort(vec.begin(),vec.end(),comparator);
    for(auto val : vec)
    {
        cout<<val.first<<"  "<<val.second<<endl;
    }
    return 0;
}