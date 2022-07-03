#include <iostream>
#include <set>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, temp_x, temp_y;
        cin>>n;
        set <int> x[n], y[n];
        for (int i=0; i<n; i++){
            cin>>temp_x>>temp_y;
            x->insert(temp_x);
            y->insert(temp_y);
        }

        int s = x->size() + y->size();
        cout<<s<<endl;
    }

    return 0;
}