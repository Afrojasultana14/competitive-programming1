#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int cnt = 0, i = 0;
        while (i <= n - k) {
            bool flag= true;
            for (int j = 0; j < k; ++j) {
                if (a[i + j] != 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cnt++;
                i += k + 1;
            } else {
                i++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
