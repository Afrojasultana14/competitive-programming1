#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c, int pos = 1) {
    a %= b;        
    if (pos > b) return -1; 

    a *= 10;
    if (a / b == c)
      return pos;
    return solve(a % b, b, c, pos + 1); 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    cout << solve(a, b, c) << "\n";
    return 0;
}
