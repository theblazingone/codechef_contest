#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int a, b, cnt_a = 0, cnt_b = 0;
        cin >> a >> b;

        if ( a%3 == 0 || b%3 == 0 ){
            cout << 0 << endl;
        }
        else if (a%3 == b%3) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }

    return 0;
}