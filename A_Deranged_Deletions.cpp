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
        vector<int> a(n);
        int idx, mx=0;
        for (int i = 0; i < n; i++) 
           {
             cin >> a[i];
             
           }
        for (int i = 0; i < n; i++) 
           {
             if(mx<a[i])
             {
             
             mx=a[i];
             idx=i;
           
             }

           }
       
        vector<int> b = a;
        sort(b.begin(), b.end());
        
       
       
        
        
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                flag = false;
                break;
            }
        }
         a.erase(a.begin() + idx);

       

        
        if (flag) {
            cout << "YES\n";
            cout << a.size() << '\n';
            for (int x : a) 
                cout << x << ' ';
            cout << '\n';
            
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}



