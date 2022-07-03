#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){
        
        long long n;
        cin>>n;

        if ((n|n)&(n|0)&(0|n) == n){
            cout<<"TRUE";
        }

        cout<<n<<" "<<n<<" "<<0<<endl;
    }

    return 0;
}