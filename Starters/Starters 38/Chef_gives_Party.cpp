#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n, x, k;
        cin >> n >> x >> k;

        if ( n*x <= k ){
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}