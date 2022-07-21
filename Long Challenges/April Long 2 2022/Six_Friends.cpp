#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int cost_double, cost_triple;
        cin >> cost_double >> cost_triple;

        int total_cost_double = 3 * cost_double;
        int total_cost_triple = 2 * cost_triple;

        cout << min( total_cost_double, total_cost_triple) << endl;
    }

    return 0;
}