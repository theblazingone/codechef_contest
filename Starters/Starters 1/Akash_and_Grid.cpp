#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, x, y;
        cin>>n>>x>>y;

        int ans = (x+y)%2;
        cout<<ans<<endl;
    }

    return 0;
}