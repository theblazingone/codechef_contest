#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int row, column, ans=0;
        cin>>row>>column;

        for (int i=1; i<=row; i = i+2){
            for (int j=1; j<=column; j = j+2){
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}