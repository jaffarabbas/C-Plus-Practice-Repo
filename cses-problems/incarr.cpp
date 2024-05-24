#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
typedef long long ll;
const ll MAX_VAL = 200000;

int main(int argc, char const *argv[]){
    ll a,count = 0;
    ll arr[MAX_VAL];
    cin >> a;
    for (ll i = 0; i < a; i++)
    {
    	cin >> arr[i];
    }
    for (ll i = 1; i < a; ++i)
    {
        while(arr[i] < arr[i-1]){
                arr[i]++;
                count++;
            }
    }
    cout << count;
}