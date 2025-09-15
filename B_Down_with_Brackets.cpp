#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        string s, t;
        cin >> s;
        t = s;

        int cnt1 = 0, cnt2 = 0;
         if(s.empty())
            cout << "NO" << endl;

       
        for(int i = 0; i < (int)t.size(); ) {
            if(t[i] == '(') {
                cnt1++;
                t.erase(i, 1); 
               
            } else {
                break;
            }
        }

        
        for(int i = (int)t.size() - 1; i >= 0; ) {
            if(t[i] == ')') {
                cnt2++;
                t.erase(i, 1);
                i--; 
            } else {
                break;
            }
        }

        if(cnt1 == cnt2 && t.empty())
            cout << "NO" << endl;
        else
            cout <<"YES" << endl;
    }
    return 0;
}

