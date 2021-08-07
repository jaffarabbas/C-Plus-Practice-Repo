#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void maxInAray(int arr[], int start, int end){
    int max;
    max = arr[start];
    for(int i = start; i < end; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "\nmax : "<< max << endl;
}



void minInAray(int arr[], int start, int end){
    int min;
    min = arr[start];
    for(int i = start; i < end; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout << "\nmin : "<< min << endl;
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
    maxInAray(arr,0,arraySize-1);
    minInAray(arr,0,arraySize-1);
}