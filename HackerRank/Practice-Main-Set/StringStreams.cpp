#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   stringstream s(str);
   char ch;
   int a;
   vector<int> v;
   while(s >> a){
    v.push_back(a);
    s >> ch;
   }
   return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}