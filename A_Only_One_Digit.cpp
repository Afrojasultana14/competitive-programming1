#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        stringstream ss;
        ss << x;
        string s;
        ss >> s;

        set<char> st;
        for (char c : s) {
            st.insert(c);
        }

        for (int i = 0; i <= 9; ++i) {
            if (st.count('0' + i)) {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}
