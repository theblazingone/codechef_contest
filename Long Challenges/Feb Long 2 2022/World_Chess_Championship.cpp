#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--){

        int prize_pool, chef=0, carlsen=0;
        cin>>prize_pool;

        char s[14];
        for (int i=0; i<14; i++){
            cin>>s[i];
        }

        for (int i=0; i<14; i++){
            if (s[i] == 'N'){
                chef+=2;
            }
            else if (s[i] == 'C'){
                carlsen+=2;
            }
            else {
                chef++;
                carlsen++;
            }
        }

        if (chef>carlsen){
            cout<<40*prize_pool<<endl;
        }
        else if (carlsen>chef){
            cout<<60*prize_pool<<endl;
        }
        else {
            cout<<55*prize_pool<<endl;
        }
    }

    return 0;
}