#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e18;
#define all(x) x.begin(), x.end()

int main(int argc, char const *argv[]){
    ll n = 5;
    vector<ll> vec = {5,4,3,2,1};
    for(int i = 0; i < n; i++){
        cout << vec[i];
    }
    cout << " " << endl;
    sort(all(vec));
    for(int i = 0; i < n; i++){
        cout << vec[i];
    }
}