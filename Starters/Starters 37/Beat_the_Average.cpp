#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int students, max_score, average;
        cin >> students >> max_score >> average;

        int sum = students*average;
        if (max_score <= average){
            cout << 0 << endl;
        }
        else {
            cout << sum/(average+1) << endl;
        }
    }

    return 0;
}