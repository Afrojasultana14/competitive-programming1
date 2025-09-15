#include<bits/stdc++.h>
using namespace std;
 
 

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, sz = 26;
    cin >> n;
    string mins = "zzz", sum;
    for(int i = 0; i < sz; i++){
        for(int j = 0; j < sz; j++){
            for(int k = 0; k < sz; k++){
                if(i + j + k + 3 == n){
                    sum += char(i + 'a');
                    sum += char(j + 'a');
                    sum += char(k + 'a');
                    mins = min(sum, mins);
                }
            }
        }
    }
    cout << mins << "\n";
    }
}