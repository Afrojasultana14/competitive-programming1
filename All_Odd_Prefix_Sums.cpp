#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), even, odd;
        for (int& x : a) cin >> x;
        
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0) even.push_back(a[i]);
            else odd.push_back(a[i]);
        }
        
        vector<int> b;
        int i = 0, j = 0;
        while (i < odd.size() || j < even.size()) {
            if (i < odd.size()) b.push_back(odd[i++]);
            if (j < even.size()) b.push_back(even[j++]);
        }

        vector<int> pre(b.size());
        pre[0] = b[0];
        for (int i = 1; i < b.size(); ++i) {
            pre[i] = pre[i - 1] + b[i];
        }
        
        bool ok = true;
        for (int i = 0; i < b.size(); ++i) {
            if (pre[i] % 2 == 0) {
                ok = false;
                break;
            }
        }
        
        cout << (ok ? "Yes" : "No") << '\n';
    }
    
    return 0;
}

