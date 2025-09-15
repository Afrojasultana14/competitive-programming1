#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n, s;
        cin >> n >> s; 
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i]; 
        }

        int min_pos = v[0];
        int max_pos = v[n - 1];

        
        int x = max_pos - min_pos;
        int y = min(abs(s - min_pos), abs(s - max_pos));

        int ans = x + y;

        cout << ans << '\n';
    }

    return 0;
}
