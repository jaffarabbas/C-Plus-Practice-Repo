#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nrows,nout,n,outrow,outtaker;
    cin >> nrows >> nout;
    for (int i = 0; i < nrows; ++i)
    {
        cin >> n;
        int v[nrows];
        for (int j = 0; j < n; ++j)
        {
            cin >> v[i][n];
        }
        cin >> outrow >> outtaker;
        cout << v[nrows];
    }
    return 0;
}