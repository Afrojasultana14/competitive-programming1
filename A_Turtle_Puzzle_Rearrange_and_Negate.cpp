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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            b.push_back(abs(a[i]));
        }

        long long sum = 0;
        for (int i = 0; i < b.size(); i++) {
            sum += b[i];
        }

        cout << sum << '\n';
    }

    return 0;
}
