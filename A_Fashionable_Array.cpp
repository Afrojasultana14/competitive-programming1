#include <bits/stdc++.h>
using namespace std;

bool isFashionable(const vector<int>& a) {
    if (a.empty()) return false;
    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());
    return ((mn + mx) % 2 == 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        if (isFashionable(a)) {
            cout << 0 << "\n";
            continue;
        }

        int ans = n; 

        for (int removed = 1; removed <= n; removed++) {
            bool found = false;
            vector<bool> select(n, false);

           
            vector<int> mask(n, 0);
            for (int i = 0; i < n - removed; i++) mask[i] = 1;
            sort(mask.begin(), mask.end());

            do {
                vector<int> subset;
                for (int i = 0; i < n; i++) {
                    if (mask[i]) subset.push_back(a[i]);
                }
                if (isFashionable(subset)) {
                    ans = removed;
                    found = true;
                    break;
                }
            } while (next_permutation(mask.begin(), mask.end()));

            if (found) break;
        }

        cout << ans << "\n";
    }

    return 0;
}
