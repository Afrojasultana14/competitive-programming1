#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        int n, k; cin >> n >> k;

        vector<int> p(n);
       
        for (int i = 0; i < n; i++) {
            p[i] = i + 1;
        }

       
        if (k < n) {
            reverse(p.begin() + k - 1, p.end());
        }

       
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
