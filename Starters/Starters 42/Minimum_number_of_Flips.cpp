#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++){
            cin >> A[i];
        }

        int cnt_n = 0, cnt_p = 0;
        for (int i = 0; i < n; i++){
            if (A[i] == 1){
                cnt_p++;
            }
            else {
                cnt_p--;
            }
        }

        if (cnt_p == cnt_n){
            cout << 0 << endl;
        }
        else {
            if (abs(cnt_p-cnt_n) % 2 != 0){
                cout << - 1 << endl;
            }
            else {
                cout << abs(cnt_p - cnt_n) / 2 << endl;
            }
        }
    }

    return 0;
}