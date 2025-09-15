#include <bits/stdc++.h>
using namespace std;

bool slove(int x, int y) {
    int mx = max(x, y);
    int mn = min(x, y);
    return mx <= 2 * mn + 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        bool z =slove(a, b);
      
        bool s = slove(c-a, d-b);
        if(z && s)
         cout << "YES\n";
        else 
          cout << "NO\n";
    }
}
