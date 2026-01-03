#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r, x, a, b;
        cin >> l >> r >> x;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << endl;
        }
        else if (abs(a - b) >= x) {
            cout << 1 << endl;
        }
        else if (abs(a - r) < x && abs(a - l) < x || (abs(b-r)<x && abs(b-l)<x)) {
            cout << -1 << endl;
        }
        else {
            if ((abs(b-l) >= x && abs(a-l)>=x) || (abs(b-r)>=x && abs(a-r)>=x)) {
                cout << 2 << endl;
            }
            else {
                cout << 3 << endl;
            }
        }
    }

    return 0;
}
