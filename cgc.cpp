#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int> vec)
{
    sort(vec.begin(),vec.end());
    if(vec[2]-vec[0] >= 10)
    {
        cout<<"check again";
        return;
    }
    cout<<"final "<<vec[1];
    return;
}
int main()
{

    int g, c, l;
    cin >> g >> c >> l;
    vector<int> vec;
    vec.push_back(g);
    vec.push_back(c);
    vec.push_back(l);
    solve(vec);
}