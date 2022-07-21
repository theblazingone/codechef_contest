#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool sort_check(ll arr[], ll n){

    for (ll i=0; i<n; i++){

        if (arr[i] > arr[i+1]){
            return false;
        }
    }

    return true;
}

int main(){

    ll t;
    cin>>t;

    while (t--){

        ll n, cnt=0, flag = 0;
        cin>>n;

        ll A[n];
        for (ll i=0; i<n; i++){
            cin>>A[i];
        }

        for (ll i=0; i<n-1; i++){

            if (A[i] > A[i+1]){
                swap(A[i], A[i+1]);
                cnt++;
                if (!sort_check(A, n)){
                    flag = 1;
                    break;
                }
            }
        }

        if (cnt<2 && flag == 0){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}