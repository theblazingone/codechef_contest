#include <iostream>

using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a, b, cnt=0, max=0;
        cin>>a>>b;
        string s;
        cin>>s;
        for (int i=0; i<a; i++){
            if (s[i]=='*'){
                cnt++;
                if (cnt>=max){
                    max=cnt;
                }
            }
            else{
                cnt=0;
            }
        }
        if (max>=b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
                            
    return 0;
}