#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int x, y;
        cin >> x >> y;
        
        int ans = 0;

        if (x % 2 == 0 && y % 2 == 0){
            ans = 0;
        }
        else if (x % 2 != 0 && y % 2 != 0){
            ans = x + y - 1;
        }
        else {
            if (x % 2 != 0 && y % 2 == 0){
                ans = y;
            }
            else if (x % 2 == 0 && y % 2 != 0){
                ans = x;
            }
        }

        cout << ans << endl;
    }

    return 0;
}