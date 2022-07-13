#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n;
        cin >> n;

        if (n % 2 == 0 || n % 7 == 0 || n % 14 == 0){
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}