#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int func(int num){
    if(num <= 1){
        return num;
    }
    return num * func(num - 1);
}


int main(int argc, char const *argv[]){
    cout << func(5) << endl;
}