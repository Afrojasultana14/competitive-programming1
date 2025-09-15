#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

      int n;
      cin >> n ;
      vector<int> a(n), prefix(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }
      prefix[0] = a[0];

      for (int i = 1;i <n;i++) {
         prefix[i] = prefix[i - 1] + a[i];
      }
     
   
    int q,ans;
    cin >> q;
      while(q--) {
         int k;
         cin >> k;
         
         auto it = upper_bound(a.begin(), a.end(), k);
        
            ans = (it - a.begin());
         
         cout << ans << '\n';
      }
   
   return 0;
}