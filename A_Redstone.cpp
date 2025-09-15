#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int flag = 0;
        for(int i=1; i<n; i++) {
            if(v[i] == v[i-1]) {
                flag = 1; 
                break;
            }
        }

        if(flag == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
