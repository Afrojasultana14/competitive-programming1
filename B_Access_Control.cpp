#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;
        string S;
        cin >> S;

        int l = 0;
        bool valid = true;

        for (char c : S) {
            if (c == '1') {
                l = X;
            } else
             { 
                 if (l == 0) {
                    valid = false;
                    break;
                }
                l--;
            }
        }

        cout << (valid ? "YES" : "NO") << '\n';
    }

    return 0;
}
