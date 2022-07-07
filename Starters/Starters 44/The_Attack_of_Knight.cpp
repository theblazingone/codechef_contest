#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        vector <vector <int>> attack_1, attack_2;
        int dx[] = {2, 2, 1, 1, -1, -1, -2, -2};
        int dy[] = {1, -1, 2, -2, 2, -2, 1, -1};

        for (int i = 0; i < 8; i++){

            int x = x1 + dx[i];
            int y = y1 + dy[i];

            if (x >= 1 && y >= 1 && x <= 8 && y <= 8){
                attack_1.push_back({x, y});
            }
            
            x = x2 + dx[i];
            y = y2 + dy[i];

            if (x >= 1 && y >= 1 && x <= 8 && y <= 8){
                attack_2.push_back({x, y}); 
            }
        }

        bool flag = false;
        for (auto& cordi_1: attack_1){
            
            for (auto& cordi_2: attack_2){

                if (cordi_1 == cordi_2){
                    flag = true;
                }
            }
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