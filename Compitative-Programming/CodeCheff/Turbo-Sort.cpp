#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ;i++){
        cin>>arr[i]; 
    }
    for(int i = 0; i<n ;i++){
        cout << arr[i]; 
    }
}

int main(int argc, char const *argv[]){
    test();
    return 0;
}

