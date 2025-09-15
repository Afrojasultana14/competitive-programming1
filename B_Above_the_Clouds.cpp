#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string mid = s.substr(1, (int)s.size() - 2);

        set<char> seen;
        bool has_duplicate = false;

        for (char c : mid) {
            if (seen.count(c)) {
                has_duplicate = true;
                break;
            }
            seen.insert(c);
        }

        if (has_duplicate) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
