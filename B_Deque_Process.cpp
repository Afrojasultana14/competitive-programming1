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
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        int l = 0, r = n - 1;
        vector<int> q;
        string ans;

        while (l <= r) {
            q.push_back(p[l]);
            int m = q.size();
            bool bad = false;
            if (m >= 5) {
                bool inc = true, dec = true;
                for (int j = m - 5; j < m - 1; j++) {
                    if (q[j] >= q[j + 1]) inc = false;
                    if (q[j] <= q[j + 1]) dec = false;
                }
                if (inc || dec) bad = true;
            }
            if (!bad) {
                ans += 'L';
                l++;
                continue;
            }
            q.pop_back();
            q.push_back(p[r]);
            m = q.size();
            bad = false;
            if (m >= 5) {
                bool inc = true, dec = true;
                for (int j = m - 5; j < m - 1; j++) {
                    if (q[j] >= q[j + 1]) inc = false;
                    if (q[j] <= q[j + 1]) dec = false;
                }
                if (inc || dec) bad = true;
            }
            ans += 'R';
            r--;
        }
        cout << ans << '\n';
    }

    return 0;
}


