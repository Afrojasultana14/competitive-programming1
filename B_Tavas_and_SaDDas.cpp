#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.size();
    int ans = 0;

    
    for (int i = 1; i < len; i++) {
        ans += (1 << i); 
    }

    
    int binary = 0;
    for (char c : s) {
        binary = binary * 2 + (c == '7' ? 1 : 0);
    }

   
    cout << ans + binary + 1 << endl;

    return 0;
}
