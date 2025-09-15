#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
         cin >> a[i];

        stack<int> st;
        vector<bool> r(n, false);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && a[st.top()] < a[i]) {
                r[st.top()] = true;
                st.pop();
            }
            st.push(i);
        }

        int ans = 0;
        for (bool x : r) 
          {
             if (x) 
             ans++;
          }
        cout << ans << "\n";
    }

    return 0;
}
