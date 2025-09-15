#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int ans = 0;
        while (true) {
            bool dec= false;
            bool inc= false;


            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) {
                    a[i]--;
                    dec = true;
                    break;
                }
            }

          
            for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    a[i]++;
                    inc = true;
                    break;
                }
            }

          ans++;

           
            if (!dec) 
            
              break;
        }

        cout << ans << "\n";
    }
}
