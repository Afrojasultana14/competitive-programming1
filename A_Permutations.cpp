#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos = 0, neg = 0;

    for(int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;
        if(x > 0)
         pos++;
        else 
         neg++;
    }

    if(pos==0||pos == 1 || neg == 1 || neg==0)
       cout << "Yes\n";
    else 
    cout << "No\n";
}
