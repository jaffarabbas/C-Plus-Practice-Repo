#include <iostream>
#include <bits/stdc++.h>
#include "darklord.cpp"
using namespace std;

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

void print_array(){
int index;
 cout << "Enter Index of An Array : " << endl;
 index = inscn();
 int arr[index];
 for (int i = 0; i < index; i++){
     cout << "Array Index : " << i << " :"; 
     arr[i] = inscn();
 }
  int size = sizeof(arr)/sizeof(arr[0]);
  insertion_sort(arr,size);
  for (int i = 0; i < index; i++){
      cout << "Index " << i << " Array : " << arr[i] << endl; 
  }        
}

int main(int argc, char const *argv[]){
    print_array();
    return 0;
}