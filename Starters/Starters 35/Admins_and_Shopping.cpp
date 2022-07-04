#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int shops, admins;
        cin>>shops>>admins;

        int capacity[shops];
        for (int i=0; i<shops; i++){
            cin>>capacity[i];
        }

        int mini = *min_element(capacity, capacity + shops);

        int x = (int) ceil((double)admins/mini);

        cout<<max(shops, x)<<endl;
    }

    return 0;
}