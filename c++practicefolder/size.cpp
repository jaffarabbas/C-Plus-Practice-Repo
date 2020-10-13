#include <iostream>
#include <bits/stdc++.h> 
#include "darklord.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,3,4,5,6,7};
    cout << sizeof(arr)/sizeof(arr[0]) << endl;
    return 0;
}

//note
/*If you have an array then sizeof(array) returns the number of bytes the array occupies. Since each element can take
 more than 1 byte of space, you have to divide the result with the size of one element (sizeof(array[0])).
This gives you number of elements in the array.*/