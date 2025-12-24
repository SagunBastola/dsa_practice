#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(n==1)
        {
            cout<<a[0]<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        int mn=a[0];
        int gap=INT_MAX;
        for(int i=1;i<n;i++)
        {
            gap=min(gap,a[i]-a[i-1]);

        }
        int ans=max(gap,mn);
        cout<<ans<<endl;

    }
    return 0;
}
