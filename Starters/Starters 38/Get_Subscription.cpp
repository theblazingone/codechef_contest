#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n;
        cin >> n;

        if (n <= 30){
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }

    return 0;
}