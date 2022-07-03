#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int b, a, cnt=0;
        cin>>b>>a;

        for (int i=0, j=0; i<=b && j<=a; i+=2, j++){
            cnt++;
        }

        if (a==0 || b==0){
            cout<<0<<endl;
        }
        else {
            cout<<cnt-1<<endl;
        }
    }

    return 0;
}