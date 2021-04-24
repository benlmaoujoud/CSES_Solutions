#include<bits/stdc++.h>

typedef long long ll; 
using namespace std; 

void solve() {
    int n; 
    cin >>n ; 
    int x;
    int mx = 0;
    ll ans =0; 
    for(int i=0 ; i<n ; i++){ 
        cin >>x ;   
        mx = max(mx,x); 
        ans+=(mx-x); 
    }    
    cout << ans;
}

int main() {

    solve();
    return 0; 
}
