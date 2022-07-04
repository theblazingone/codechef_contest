#include <iostream>

using namespace std;

#define ll long long

int main(){

    int t;
    cin >> t;

    while (t--){

        ll a, b, m;
        cin >> a >> b >> m;

        if ( a > b ){
            cout << min(a-b, m-a+b) << endl;
        }
        else {
            cout << min(b-a, a+m-b) << endl;
        }
    }

    return 0;
}