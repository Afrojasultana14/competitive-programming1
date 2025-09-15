#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 1);

    for (int i = 0; i < m + 1; i++)
    {
        cin >> a[i];
    }
   
     long long fedor=a[m];
     long long friends=0;
    for(int i=0;i<m;i++)
    {
        long long cnt=0;
        
        for(int k=n-1;k>=0;k--)
        {
            int other = ((a[i] >> k) & 1), main = ((fedor >> k) & 1);
            if(main!=other)
            {
                cnt++;
            }
        }
         if(cnt<=k)
        friends++;

    }
   


    cout << friends;
    return 0;
}