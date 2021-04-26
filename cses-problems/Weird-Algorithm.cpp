#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int a;
    cin >> a;
    cout<< a << " ";
    while(true){
        if(a!=1){
            if(a%2==0){
                a /= 2;
            }else if(a%2!=0){
                a =(a * 3)+1;
            }
            cout<< a << " ";
        }
    }
} 