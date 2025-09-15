#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main()
{
    ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int t;  
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;

       

        ll first =n-k+1;
        ll last =n;
        ll sum1=(n*(n+1))/2; 
        ll m=first-1;
        ll sum2=(m*(m+1))/2; 
        ll dif=sum1-sum2;

        if(dif%2==0)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    }
    return 0;
}