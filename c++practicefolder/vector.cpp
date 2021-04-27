#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isEmpty(vector<int> &v){
    return v.size() <= 0;
}

void insert(vector<int> &v,int a){
    return v.push_back(a);
}

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}





int main(int argc, char const *argv[]){
    vector<int> vec;
    // insert(vec,3);
    // print(vec);
    cout << isEmpty(vec);
}