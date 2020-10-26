#include <iostream>
#include <bits/stdc++.h>
#include "darklord.cpp"

using namespace std;


class selection_sort{
    public:void swap(int *num1,int *num2){
        int temp;
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    public:void Selction_sort(int arr[],int size){
        int i,j,min;
        for (i = 0; i < size - 1; i++)
        {
            min = i;
           for (j = i + 1; j < size; j++)
           {
               if(arr[j] < arr[min]){//arr[1] < arr[0] = 5 < 4
                  min = j;//
               }   
               swap(&arr[min], &arr[i]);
           }
        }  
    }
    public:void print_array(){
        int index;
        cout << "Enter Index of An Array : " << endl;
        index = inscn();
        int arr[index];
        for (int i = 0; i < index; i++){
            cout << "Array Index : " << i << " :"; 
            arr[i] = inscn();
        }
        int size = sizeof(arr)/sizeof(arr[0]);
        Selction_sort(arr,size);
        for (int i = 0; i < index; i++){
            cout << "Index " << i << " Array : " << arr[i] << endl; 
        }
    }
};

int main(int argc, char const *argv[]){
    selection_sort object;
    object.print_array();
    return 0;
}