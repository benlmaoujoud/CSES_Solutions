#include<bits/stdc++.h>

using namespace std; 
typedef long long ll;

void solve() {
    int n; 
    cin>>n;
    if(n==2|| n==3){
        cout <<"NO SOLUTION";
        return; 
    }
    int i = 2; 
    while(i<=n) {
        cout<<i<<" "; 
        i+=2;
    }
    int j=1; 
    while(j<=n) {
        cout <<j<<" ";
        j+=2; 
    }
}


int main(){

    solve();
    return 0; 
}