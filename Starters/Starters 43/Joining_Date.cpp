#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int candidates, turned_down;
        cin >> candidates >> turned_down;

        int arr[candidates] = {1};

        if (candidates == turned_down || candidates <= 5){
            cout << 0 << endl;
        }
        else {
            arr[turned_down-1] = 0;
            int cnt = 0;
            for (int i = turned_down; i < candidates; i++){
                if (i%5 == 0){
                    cnt++;
                }
            }

            cout << cnt << endl;
        }
    }

    return 0;
}