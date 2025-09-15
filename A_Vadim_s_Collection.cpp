#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        string s, ans;
        cin >> s;

        map<int,int> v;
        for(int i=0; i<s.size(); i++) {
            v[s[i] - '0']++;
        }

        for(int i=0; i<10; i++) {
            int cnt = 9 - i;
            for(int j = cnt; j <= 9; j++) {
                if(v[j] > 0) {
                    ans += (j + '0');
                    v[j]--;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
