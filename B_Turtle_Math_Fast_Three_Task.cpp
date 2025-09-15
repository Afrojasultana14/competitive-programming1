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
        vector<long long> a(n);
        long long sum = 0;
        bool found = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

         if(sum%3==0)
        cout<<0<<endl;
    else if(sum%3==2)
        cout<<1<<endl;
    else  {
            for (int i = 0; i < n; i++) {
                if (a[i] % 3 == 1) {
                    cout << 1 << '\n';
                    found = true;
                    break;
                }
            }
            if (!found) cout << 2 << '\n';
        }

       
    }

    return 0;
}
