#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int a, b;
        cin >> a >> b;

        if (a < b){
            cout << "No\n";
        }
        else {
            cout << "Yes\n";
        }
    }

    return 0;
}