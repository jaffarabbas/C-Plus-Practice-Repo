#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeElement(int arr[], int& size, int index) {
    if (index < 0 || index >= size) {
        std::cerr << "Index out of bounds\n";
        return;
    }
    for (int i = index; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
}

int main(int argc, char const *argv[]){
    int arr[6] = {10, 20, 35, 50, 75, 80};
    int target = 85;
    int count = 0;
    int count2 = 5;
    for(int i=0 ; i < 6 ;i++){
        if(arr[count] + arr[count2] > target){
            count2--;
        }else if(arr[count] + arr[count2] < target){
            count++;
        }else if(arr[count] + arr[count2] == target){
            cout << "Found" << " " << arr[count] << " " << arr[count2] << endl;
            int size = sizeof(arr) / sizeof(arr[0]);
            removeElement(arr, size, count);
            removeElement(arr, size, count2);
        }else{
            cout << "Not Found" << endl;
        }
    }
}

