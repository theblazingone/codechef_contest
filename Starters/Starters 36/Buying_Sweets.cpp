#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

    int t;
    cin >> t;

    while (t--){

        ll sweets, rupees, cnt = 0;
        cin >> sweets >> rupees;

        ll price_sweets[sweets], cash_back[sweets];

        for (ll i = 0; i < sweets; i++){
            cin >> price_sweets[i];
        }

        for (ll j = 0; j < sweets; j++){
            cin >> cash_back[j];
        }

        vector <pair<ll,ll>> spent;
        for (ll i = 0; i < sweets; i++){
            spent.push_back({price_sweets[i] - cash_back[i], price_sweets[i]});
        }

        sort (spent.begin(), spent.end());

        for (auto cur: spent){
            ll original_cost = cur.second, spend = cur.first;
            ll cashback = original_cost - spend;

            if (rupees < original_cost){
                continue;
            }

            rupees -= original_cost;
            cnt+=1;
            cnt += rupees / spend;
            rupees %= spend;
            rupees += cashback;
        }

        cout << cnt << endl;
    }

    return 0;
}