#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];



           sort(a.begin(), a.end());
        
        int sum = 0;
        int flag=0;
       for (int i = 0; i < n; i++)
       {
        sum+=a[i];
        if(sum%3==0)
           {
            flag=1;
            break;
           }


       }
    if(flag==1){
        cout << "YES" << "\n";
    }
    else
      cout << "NO" << "\n";
       
    }
    return 0;
}