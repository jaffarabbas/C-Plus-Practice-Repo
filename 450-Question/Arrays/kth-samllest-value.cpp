#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "" << endl;
}

void insertion_sort(int arr[],int size){
    int i,j,key;
    for(i=1;i<size;i++){
        key = arr[i];
        j = i - 1;
        while (j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;       
    }
}

void kthSmallestVlaue(int arr[], int arraySize){
    int kth;
    cout << "Enter kth Value" << endl;
    cin >> kth;
    insertion_sort(arr,arraySize);
    cout<< "Kth Value : " << arr[kth-1] << endl;
}
int main(int argc, char const *argv[])
{
    int arraySize;
    cout << "Size of Array" << endl;
    cin >> arraySize;
    int arr[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cout << "array index " << i << endl;
        cin >> arr[i];
    }
    printArray(arr, arraySize);
    kthSmallestVlaue(arr, arraySize);
}