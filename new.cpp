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
    if (missing <= vec.size() && missing > 0) {
        int k_th = vec[missing - 1];
        cout << missing << " " << k_th;
    } else {
    cout << missing << " " << "N/A";
}
    return 0;
}
