#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n, cnt_p = 0, cnt_n = 0;
        cin >> n;

        int A[n];
        for ( int i = 0; i < n; i++ ){
            cin >> A[i];

            if ( A[i] == 1 ){
                cnt_p++;
            }
            else {
                cnt_n++;
            }
        }

        if ( std::abs (cnt_p - cnt_n) < 2 ){
            cout << "Yes\n";
        }
        else if ( std::abs (cnt_p - cnt_n) == 2 ){
            if ( cnt_n % 2 == 0 ){
                cout << "Yes\n";
            }
            else {
                cout << "No\n";
            }
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}