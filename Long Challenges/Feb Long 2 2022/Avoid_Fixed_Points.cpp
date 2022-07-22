#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int n, k=0;
        cin>>n;
        int A[n];
        for (int i=0; i<n; i++){
            cin>>A[i];
        }

        for (int i=0; i<n; i++){
            int temp = i+k+1;
            if (temp==A[i]){
                k++;
            }
        }

        cout<<k<<endl;
    }

    return 0;
}