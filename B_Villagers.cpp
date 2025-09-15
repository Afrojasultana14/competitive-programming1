#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> g(n);
        for(int i=0; i<n; i++) cin >> g[i];

        sort(g.begin(), g.end());

        ll total = 0;
        if(n%2==0) {
            for(int i=0,j=1; i<n-1 && j<n; i+=2, j+=2) {
                total += max(g[j], g[i]);
            }
        }
        else {
            for(int i=0,j=1; i<n-2 && j<n-1; i+=2, j+=2) {
                total += max(g[j], g[i]);
            }
            total += g[n-1];
        }

        cout << total << "\n";
    }
    return 0;
}
