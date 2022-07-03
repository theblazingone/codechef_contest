#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int z, y, a, b, c;
        cin>>z>>y>>a>>b>>c;

        int temp = z - y;

        if (temp < a+b+c){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}