#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nrows,nout,n,s=0,outrow,outtaker;
    cin >> nrows >> nout;
    int *arr[nrows];
    while(nrows--)
    {
        cin >> n;
        arr[s] = new int[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[s][i];
        }
        s++;
    }
    while(nout--){
        cin >> outrow >> outtaker;
        cout << arr[outrow][outtaker] << endl;
    }
    return 0;
}