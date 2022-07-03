#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;

    while (t--){

        ll k;
        cin>>k;

        ll n = 0;
        while(k%2==0){
            k/=2;
            n++;
        }

        cout<<n<<endl;
    }

    return 0;
}