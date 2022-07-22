#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, cnt_1=0, cnt_0=0;
        cin>>n;
        char s[n];
        for (int i=0; i<n; i++){
            cin>>s[i];
        }

        for (int i=0; i<n; i++){
            if (s[i]=='1'){
                cnt_1++;
            }
            else {
                cnt_0++;
            }
        }

        if (n%2==0){
            if (cnt_1 == cnt_0){
                cout<<"YES"<<endl;
            }
            else if (cnt_1%2==0 && cnt_0%2==0){
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}