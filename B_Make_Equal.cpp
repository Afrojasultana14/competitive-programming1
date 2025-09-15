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
        vector<long long> a(n),b(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        long long ghor = sum / n;
        long long sum2 = 0;
        bool possible = true;
         for (int i = 0; i < n; ++i) {
              if (sum2 )
             {
                possible = false;
                break;
            }
             int x= ghor - a[i];
             b.push_back(x);
             sum2 +=x;
            
        }

       
        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
