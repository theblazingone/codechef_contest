#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n;
        string s;
        cin >> n >> s;

        int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
        for (int i = 0; i < n/2; i++){
            if (s[i] == '('){
                cnt1++;
            }
            else {
                cnt2++;
            }
        }
        
        cout << 2*cnt2 << endl;
    } 

    return 0;
}