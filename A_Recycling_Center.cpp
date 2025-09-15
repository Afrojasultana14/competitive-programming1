#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; long long c;
        cin >> n >> c;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        int free_destroyed = 0;
        long long current_c = c;

        for (int i = 0; i < n; i++) {
            if (a[i] <= current_c) {
                free_destroyed++;
                current_c *= 2;  // ওজন দ্বিগুণ হওয়ার আগে c দ্বিগুণ হবে
            } else {
                // এবার আর বেশি ফ্রি ধ্বংস সম্ভব না
                break;
            }
        }

        // বাকি ব্যাগগুলোকে ১ কয়েন করে ধ্বংস করতে হবে
        cout << n - free_destroyed << '\n';
    }

    return 0;
}
