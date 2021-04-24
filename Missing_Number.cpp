#include<iostream>

typedef long long ll;

using namespace std ;

void solve() {
    ll n; 
    cin >>n; 
    int element ; 
    ll missing = n*(n+1)/2; 
    for(int i=0 ; i<n-1 ; i++){
        cin >> element;
        missing = missing-element;    
    }
    cout <<missing; 

}
int main() {

    solve(); 
    return 0; 
}