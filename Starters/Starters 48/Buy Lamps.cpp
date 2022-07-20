#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n, k, red_cost, blue_cost;
        cin >> n >> k >> red_cost >> blue_cost;

        int blue_lamp = n - k;
        int ans = k * red_cost;

        int most_lamp = red_cost < blue_cost ? red_cost : blue_cost;
        ans += most_lamp * blue_lamp;

        cout << ans << endl;
    }

    return 0;
}