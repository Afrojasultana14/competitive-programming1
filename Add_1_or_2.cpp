#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        ll mx = *max_element(a.begin(), a.end());
        ll cn = 1e18;
        ll  ans = cn;

        while (mx <= cn) {
            ll mid = mx + (cn - mx) / 2;

          
            ll sum = 0;
            bool possible = true;
            for (int i = 0; i < n; i++)
             {
                ll allowed = mid - a[i];
                if (b[i] <= allowed)
                 {
                    sum += (allowed - b[i]) / 2;
                } 
                else 
                {
                    ll need = b[i] - allowed;
                    if (need > sum) 
                    {
                        possible = false;
                        break;
                    }
                    sum -= need;
                }
            }

            if (possible) {
                ans = mid;
                cn = mid - 1;
            } else {
                mx = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
