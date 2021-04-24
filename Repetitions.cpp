#include<bits/stdc++.h>

using namespace std; 

void solve() {

    string dna ;
    cin >> dna;  
    int ans  = 1;
    int count=0; 
    char l ='A'; 
    for(int i =0; i<dna.length(); ++i){

        if(dna[i] == l){ 
            ++count; 
            ans = max(count, ans);
        } 
        else {
            l = dna[i]; 
            count = 1; 
            }  
    }

    cout << ans; 

}


int main() {

    solve(); 
    return 0; 
}