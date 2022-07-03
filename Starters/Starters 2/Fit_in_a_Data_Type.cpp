#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, x;
        cin>>n>>x;

        if (x<=n || x==0){
            cout<<x<<endl;
        }
        else {
            for (int i=0; i<51; i++){
                if (x>n){
                    x = x-n-1;
                }
            }
            cout<<x<<endl;
        }
    }

    return 0;
}