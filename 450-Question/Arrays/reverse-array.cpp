#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int start , int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}


int main(int argc, char const *argv[]){
    int arraySize;
    cout << "Size of Array" << endl;
    cin >> arraySize;
    int arr[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cout << "array index " << i << endl;
        cin >> arr[i];
    }
    printArray(arr,arraySize);
    reverseArray(arr,0,arraySize-1);
    cout << "\nAfter reverse array " << endl;
    printArray(arr,arraySize);
}