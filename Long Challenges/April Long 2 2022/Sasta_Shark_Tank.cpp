#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int x, y;
        cin>>x>>y;

        if (x*10 > y*5){
            cout<<"FIRST\n";
        }
        else if (x*10 < y*5){
            cout<<"SECOND\n";
        }
        else {
            cout<<"ANY\n";
        }
    }

    return 0;
}