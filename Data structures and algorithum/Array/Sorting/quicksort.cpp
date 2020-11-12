#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
        int pivot = arr[low];
        int i = low + 1;
        int j = high;
        int temp;
    do {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while (i<j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void sort(int arr[],int low,int high){
        int part;
        if(low<high){
            part = partition(arr,low,high);
            sort(arr,low,part-1);
            sort(arr,part+1,high);
        }
    }

void test(){
 int arr[] = {4,8,3,1,6,7};
 //sizeof(arr)/ sizeof(arr[0])
   int n = sizeof(arr)/ sizeof(arr[0]);
   int i=0;
   cout<<"Given array is:"<<endl;
   for (i = 0; i < n; i++)
   cout<< arr[i] <<" ";
   cout<<endl;
   sort(arr,0,n-1);
   printf("\nSorted array is: \n");
   for (i = 0; i < n; i++)
   cout<< arr[i] <<" ";
}


int main(int argc, char const *argv[]){
    test();
    return 0;
}