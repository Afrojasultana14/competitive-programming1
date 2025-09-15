#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        if(n % 4 == 0)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }

    return 0;
}
