#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int x, y, room=0;
        cin>>x>>y;

        if (x>y && y){
            cout<<x+y<<endl;
        }
        else if (x==y && y){
            cout<<x+y-1<<endl;
        }
        else if (y==0){
            cout<<x<<endl;
        }
    }

    return 0;
}