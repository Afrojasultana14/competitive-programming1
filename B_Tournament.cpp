#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--) {
        int n, j, k;
        cin >> n >> j >> k;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<long long, greater<long long>> s(a.begin(), a.end());

        vector<long long> v;  
        auto it = s.begin();
        for(int i = 0; i < k && it != s.end(); i++, it++) {
            v.push_back(*it);
        }
        if(n<j)
        {
             cout << "NO\n";
              continue;

        }

        long long player = a[j-1];
        bool flag = false;

        for(long long x : v) {
            if(x == player) {
                flag = true;
                break;
            }
        }

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}