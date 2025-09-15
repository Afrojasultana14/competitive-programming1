#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N ;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) 
        {
            cin >> A[i];
        }

        int ans = INT_MAX;
       
        for (int i = 1; i < N; ++i) {
            int a =max(A[i],A[i-1]);
            ans=min(ans,a);
           
        }

        cout << ans-1 << '\n';
    }

    return 0;
}
 