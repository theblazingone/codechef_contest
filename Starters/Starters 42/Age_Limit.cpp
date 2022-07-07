#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int x, y, a;
        cin >> x >> y >> a;

        if (a < y && x <= a){
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }

    return 0;
}