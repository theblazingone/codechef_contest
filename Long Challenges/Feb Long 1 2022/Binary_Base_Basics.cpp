#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, k, cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;

        for (int i=0; i<n/2; i++){
            
            if (s[i]!=s[n-i-1]){
                cnt++;
            }
        }

        
        if ((k-cnt)>=0 && (k-cnt)%2==0){
            cout<<"YES"<<endl;
        }
        else if ((k-cnt)>=0 && n%2==1){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}