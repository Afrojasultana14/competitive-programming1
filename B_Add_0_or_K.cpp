#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long base = a[0];
        for(int i = 0; i < n; i++) {
            long long diff = (a[i] - base) % k;
            if(diff < 0) diff += k; 
            a[i] += (k - diff);    
        }

        for(int i = 0; i < n; i++)
         cout << a[i] << " ";
        cout << "\n";
    }
}
