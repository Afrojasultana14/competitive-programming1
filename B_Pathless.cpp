#include <bits/stdc++.h>
using namespace std;

bool is_valid(vector<int>& a, int s) {
    int sum = 0;
    for (int x : a) {
        sum += x;
        if (sum == s) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int total = 0;
        for (int& x : a) {
            cin >> x;
            total += x;
        }

        if (total == s) {
            cout << -1 << '\n';
            continue;
        }

        sort(a.begin(), a.end());

        int prefix = 0;
        bool swapped = false;
        for (int i = 0; i < n; ++i) {
            prefix += a[i];
            if (prefix == s) {
                if (i + 1 < n) {
                    swap(a[i], a[i + 1]);
                    swapped = true;
                }
                break;
            }
        }

        if (!is_valid(a, s)) {
            cout << -1 << '\n';
        } else {
            for (int x : a) cout << x << ' ';
            cout << '\n';
        }
    }
}
