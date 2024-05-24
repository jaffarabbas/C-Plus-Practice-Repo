#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
typedef long long ll;
const ll MAX_VAL = 200000;

int main(int argc, char const *argv[]){
    ll a;
    cin >> a;
    vector<ll> even,odd;
    if(a == 1){
        cout << 1;
        return 0;
    }
    if(a == 2 || a == 3){
        cout << "NO SOLUTION";
        return 0;
    }
    for (ll i = 1; i <= a; ++i)
    {
        if(i%2 == 0){
            even.push_back(i);
        }else{
            odd.push_back(i);
        }
    }
    for (ll num : even) {
        cout << num << " ";
    }
    for (ll num : odd) {
        cout << num << " ";
    }
    cout << endl;
}