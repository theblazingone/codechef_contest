#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int friends; 
        cin >> friends;

        int laptop[11] = {0};
        for (int i = 0; i < friends; i++){
            int temp;
            cin >> temp;
            laptop[temp]++;
        }

        int maximum = laptop[0], ans;
        for (int i = 0; i < 11; i++){
            if (laptop[i] > maximum){
                maximum = laptop[i];
                ans = i;
            }
        }

        int cnt = 0;
        for (int i = 1; i < 11; i++){
            if (laptop[i] == maximum){
                cnt++;
            }
        }
        
        if (cnt >= 2){
            cout << "CONFUSED\n";
        }
        else {
            cout << ans << endl;
        }
    }

    return 0;
}