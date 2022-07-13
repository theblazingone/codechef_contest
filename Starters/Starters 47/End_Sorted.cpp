#include <iostream>
#include <vector>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n;
        cin >> n;

        vector <int> vec(n, 0);

        int index_1 = 0, index_n = 0;
        for (int i = 0; i < n; i++){
            cin >> vec[i];
            if (vec[i] == 1){
                index_1 = i;
            }
            if (vec[i] == n){
                index_n = i;
            }
        }

        int ans = 0;
        if (index_1 == 0 && index_n == n-1){
            ans = 0;
        }
        else if (index_1 == 0 && index_n != n-1){
            ans = n - 1 - index_n;
        }
        else if (index_1 != 0 && index_n == n-1){
            ans = index_1;
        }
        else {
            ans = n - 1 - index_n + index_1;
            if (index_n < index_1){
                ans -= 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}