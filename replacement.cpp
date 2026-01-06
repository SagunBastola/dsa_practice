#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        string s, t;
        cin >> s >> t;
        if(t == "a") {
            cout << 1 << endl;
        } 
        else if (t.find('a') != string::npos) {
            cout << -1 << endl;
        }
        else {
            long long int ans = pow(2, s.size());
            cout << ans << endl;
        }
    }
    return 0;
}