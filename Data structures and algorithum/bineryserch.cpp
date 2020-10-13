#include <iostream>
#include <bits/stdc++.h>
#include "darklord.cpp"
using namespace std;

void sourt_of_array(int arr[],int length){
    int i,j,min,temp;
    for(i=0;i<length-1;i++){
        min = i;
        for(j=i+1;j<length;j++){
            if(arr[j] < arr[min]){
                min = j;
                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
    }
}

int binaryserch(){
    cout << "BINARY SERACH !!!!!!" << endl;
    cout << "Enter Array Length !!!" << endl;
    int length = inscn();
    int arr[length];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<length; i++){
        cout << "Array : " << (i+1) << ": ";
        arr[i] = inscn();
    }
    sourt_of_array(arr,size);
    for(int i=0; i<length; i++){
        cout << arr[i] << endl;
    }
    //binaryserch
    int low,mid,high,search;

    cout << "Enter Value for Search !!!!" << endl;
    search = inscn();

    low = 0;
    high = size -1;
    mid = (low+high)/2;

    while(low <= high){
        if(arr[mid] == search){
            return mid;
        }
        if(arr[mid] < search){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}


int main(int argc, char const *argv[])
{
    cout << "Value you desired : " << binaryserch() << endl;
}
