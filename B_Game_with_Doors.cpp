#include <iostream>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        int low = max(l, L), hig = min(r, R);

        if (low - 1 >= min(l, L) && low - 1 <= max(r, R))
            low -= 1;
        if (hig + 1 >= min(l, L) && hig + 1 <= max(r, R))
            hig += 1;

        cout << max(1, hig - low) << endl;
    }
}
