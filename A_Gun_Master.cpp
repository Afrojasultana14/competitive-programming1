#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, D;
        cin >> N >> D;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) 
        {
            cin >> A[i];
        }

        int count = 0;
        bool close = true; 
        for (int i = 0; i < N; ++i) {
            bool required = (A[i] <= D);
            if (required != close)
             {
                count++;
                close = required;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
 