#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s; 
        cin >> s;

        int first = -1, last = -1;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                if(first==-1) first=i;
                last=i;
            }
        }

        if(first != -1 && last - first + 1 > k){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<int> ans(n);
        int l = 1, r = n;

        for(int i=0; i<n; i++){
            if(s[i]=='1') ans[i] = r--;
        }

        for(int i=0; i<n; i++){
            if(s[i]=='0') 
             ans[i] = l++;
        }

        for(int i=0; i<n; i++) cout << ans[i] << " ";
        cout << "\n";
    }
}
