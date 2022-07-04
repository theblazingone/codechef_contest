#include <iostream>

using namespace std;

#define ll long long 

int main(){

    int t;
    cin >> t;

    while (t--){

        ll n;
        cin >> n;

        if ( n <= 4 ){
            cout << n << endl;
        }
        else {
            ll free = n % 5;
            cout << n - free << endl;
        }
    }

    return 0;
}