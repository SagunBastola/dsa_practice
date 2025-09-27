#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> vec;
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
        sum+=a;
    }
    int missing=n*(n+1)/2-sum;
    sort(vec.begin(),vec.end(),greater<int>());
    int k_th=vec[missing-1];
    cout<<missing<<" "<<k_th;
    return 0;
}
