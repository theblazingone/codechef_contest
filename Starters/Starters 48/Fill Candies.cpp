#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n, k, m;
        cin >> n >> k >> m;

        int ans = n % (k*m);
        if (ans){
            cout << n / (k*m) + 1 << endl;
        }
        else {
            cout << n / (k*m) << endl;
        }
    }

    return 0;
}