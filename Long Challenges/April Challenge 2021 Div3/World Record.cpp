#include <iostream>
#include <iomanip>

using namespace std;

#define ll long long

float rndoff(float race_time);

int main() {
    ll t;
    cin>>t;
    while(t--){
        float ans=0, record=9.58;
        float a, b, c, race_time, prct_time, temp=0.0;
        cin>>a>>b>>c>>prct_time;
        temp = a*b*c*prct_time;
        race_time = 100/temp;
        race_time = rndoff(race_time);
        if (race_time>=9.58){
            cout<<"NO"<<endl;
        }
        else if (race_time==record){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}

float rndoff(float race_time){
    float ans = (int) (race_time*100 +0.5);

    return (float)ans/100; 
}