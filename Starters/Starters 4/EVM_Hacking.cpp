#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int x, y, z, a, b, c;
        cin>>x>>y>>z>>a>>b>>c;

        float major = float (a+b+c)/2;

        if (a+y+z>major || x+b+z>major || x+y+c>major){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}