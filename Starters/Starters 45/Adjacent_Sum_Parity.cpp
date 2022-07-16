#include <iostream>
#include <vector>

using namespace std;

int expected_first(int f, vector <int> &b, int n){

    for (int i = 0; i < n; i++){
        if (f == 1 && b[i] == 1){
            f = 0;
        }
        else if (f == 0 && b[i] == 1){
            f = 1;
        }
    }

    return f;
}

int main(){

    int t;
    cin >> t;

    while (t--){

        int n;
        cin >> n;
        vector <int> bin(n);

        for (int i = 0; i < n; i++){
            cin >> bin[i];
        }

        bool flag = false;
        int first = 1;
        int expected = expected_first(1, bin, n);

        if (first == expected){
            flag = true;
        }

        first = 0;
        expected = expected_first(0, bin, n);

        if (first == expected){
            flag = true;
        }

        if (flag){
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}