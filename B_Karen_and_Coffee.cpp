#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   const int MAX = 2e5 + 5;
   vector<int> d(MAX), coffee(MAX), pref(MAX);

   int n, k, q;
   cin >> n >> k >> q;

  
   for (int i = 0; i < n; i++) {
      int l, r;
      cin >> l >> r;
      d[l]++;
      d[r + 1]--;
   }

   
   for (int i = 1; i < MAX; i++) {
      d[i] += d[i - 1];
   }

   
   for (int i = 0; i < MAX; i++) {
      if (d[i] >= k) 
          coffee[i] = 1;
   }

   
   for (int i = 1; i < MAX; i++) {
      pref[i] = pref[i - 1] + coffee[i];
   }

  
   while (q--) {
      int a, b;
      cin >> a >> b;
      cout << (pref[b] - pref[a - 1]) << '\n';
   }

   return 0;
}
