#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){

        int n;
        cin >> n;
        string encode, kratos = "";
        cin >> encode;

        for (int i = 0; i < n-1; i+=2){

            if (encode[i] == '0' && encode[i+1] == '0'){
                kratos += 'A';
            }            
            else if (encode[i] == '0' && encode[i+1] == '1'){
                kratos += 'T';
            }
            else if (encode[i] == '1' && encode[i+1] == '0'){
                kratos += 'C';
            }
            else {
                kratos += 'G';
            }
        }

        cout << kratos << endl;
    }

    return 0;
}