#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    ll t;
    cin>>t;

    while (t--){
        
        ll n, OR = 0 ,res = 0;
        cin>>n;

        ll A[n], B[n];
        for (ll i=0; i<n; i++){
            cin>>A[i];
        }

        for (int i = n-1; i>=0; i--){
            OR |= A[i];
            B[i] = OR;
        }

        for (int i=0; i+1<n; i++){
            res |= (A[i] & B[i+1]); 
        }

        cout<<res<<endl;
    }

    return 0;
}