#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    
    
    while(t--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        bool ok = false;
        if((n%2 + 2) % 2 == (b%2 + 2) % 2)
        { 
            if(a <= b) 
            ok = true;
            else if((n%2 + 2) % 2 == (a%2 + 2) % 2) 
            ok = true;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
