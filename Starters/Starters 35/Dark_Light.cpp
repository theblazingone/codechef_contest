#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, k;
        cin>>n>>k;

        if (n%4 == 0){

            if (k==0){
                cout<<"Off\n";
            }
            else {
                cout<<"On\n";
            }
        }
        else {
            
            if (k==0){
                cout<<"On\n";
            }
            else {
                cout<<"Ambiguous\n";
            }
        }
    }

    return 0;
}