#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int x;
        cin>>x;

        int disc_10 = x*0.1;
        int flat_100 = 100;

        cout<<max(disc_10, flat_100)<<endl;
    }

    return 0;
}