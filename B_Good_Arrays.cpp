#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0;
        long long ones = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            
        }

        long long sum_a = 0, cnt_1 = 0;
    for (int x: a) {
        sum_a += x;
        if (x == 1) cnt_1++;
    }
    
    if (cnt_1 > sum / 2 && n > 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
}