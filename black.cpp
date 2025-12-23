#include <iostream>
#include<vector>
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

        
        long long S = 0;
        for (int i = 1; i < n; i++) {
            S += abs(a[i] - a[i - 1]);
        }

        long long ans = S;  
        for (int k = 1; k <= n - 2; k++) {
            long long cur = S;
            cur -= abs(a[k] - a[k - 1]);
            cur -= abs(a[k + 1] - a[k]);
            cur += abs(a[k + 1] - a[k - 1]);
            ans = min(ans, cur);
        }

        cout << ans << "\n";
    }
    return 0;
}
