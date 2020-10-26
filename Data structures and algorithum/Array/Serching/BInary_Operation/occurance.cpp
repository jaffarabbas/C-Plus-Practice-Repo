#include <iostream>
#include <bits/stdc++.h>
#include "darklord.cpp"
using namespace std;

int occurance(int arr[],int size,int mid,int key){
    int left,right,count=1;
    left = mid - 1;
    while(left >=0 && arr[left] == key){
        count ++;
        left--;
    }
    while(right <= size-1 && arr[right] == key){
        count++;
        right++;
    }

    return count;
}

void binerySerach(int arr[],int size,int mid,int low,int high,int key){
    int i,j;
    bool flag=false;
    for(i=0;i<size-1;++i){
        for (j = i+1; j < size; j++)
        {
            if(arr[mid] == key){
                flag = true;
            }   

            if(arr[mid] < key){
                low = mid - 1; 
            }else if(arr[mid] > key){
                high = mid + 1;
            }
        }
    }

    if(flag){
        cout << occurance(arr,size,mid,key) << endl;
    }
}


int main(int argc, char const *argv[]){
    int arr[] = {2,2,2,2,2,6,7,8,9,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = 0;
    int high = size - 1;
    int mid = min + high / 2;
    int key = 9;
    binerySerach(arr,size,mid,min,high,key);
    return 0;
}