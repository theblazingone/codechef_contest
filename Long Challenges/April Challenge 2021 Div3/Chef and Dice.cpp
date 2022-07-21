#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x = n%4, y = n/4;
        ll a5=0, b4=0, c3=0, d2=0, f=0;
        switch(x){
            case 1: a5=1; break;                     // 5 faces
            case 2: b4=2; break;                     // 4 faces
            case 3: b4=2; c3=1; break;               // 2 with 4 faces, 1 with 3 faces
        }
        if (y>0){
            d2+=y*4;                                 // 2 faces
            f=(4-x)*4;                               // addition of top most view
        }
        ll sum = (d2*11) + (c3*15) + (b4*18) + (a5*20) + f;
        cout<<sum<<endl;
    }
                            
    return 0;
}