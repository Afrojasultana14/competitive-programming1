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
        vector<vector<int>> grid(n, vector<int>(n));

       for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                char ch;
                cin >> ch;
                grid[i][j] = ch - '0';  
            }
        }


        set<int> one_counts;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) 
                    cnt++;
            }
            if (cnt > 0) 
                one_counts.insert(cnt);
        }

        cout << (one_counts.size() == 1 ? "SQUARE\n" : "TRIANGLE\n");
    }

    return 0;
}
