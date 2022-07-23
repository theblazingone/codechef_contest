#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

int main(){

    int t;
    cin>>t;

    while (t--){

        double n;
        cin>>n;

        double ans = (pow(0.143*n, n));
 
        if (ans - floor(ans) < 0.5){
            cout<<floor(ans)<<endl;
        }
        else{
            cout<<floor(ans)+1<<endl;
        }
    }

    return 0;
}