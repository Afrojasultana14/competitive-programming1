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
        int idx = 0, val = -1;
        for (int i = 0; i < n; i++)
         {
            int x;
             cin >> x;
            if (i == 0 || x > val)
             { 
                val = x;
                idx = i;           
            }
        }
        cout << (idx + 1) << "\n";   
    }
    return 0;
}
