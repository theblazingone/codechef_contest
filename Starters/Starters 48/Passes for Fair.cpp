#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n, x;
        cin >> n >> x;

        if (n+1 <= x){
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }

    return 0;
}