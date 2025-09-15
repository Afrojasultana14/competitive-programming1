 #include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n,sum=0; 
          cin >> n;
          vector<int> v(n);
        for (int i = 0; i < n; ++i) {
          
            cin >> v[i];
            sum+=v[i];
          
        }
        int ans=sum;
        sort(v.begin(),v.end());
        vector<int> freq(n, 0);
        for (int i = 0; i < n; ++i) {
           
            freq[v[i]]++;
        }
        int sum2=0;
        for (int i = 0; i < n-1; ++i) {
           
            
            if(freq[i]==0)
            {
                sum2+=i;

            }
        }
        sum2+=v[n-1];
        

        int mx=max(sum,sum2);

        
        

       cout << mx << '\n';
     
    }
}