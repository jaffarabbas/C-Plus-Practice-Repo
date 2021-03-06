#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int i,j,k;
   // int *dyn = &high;
    i=low;
    j=mid+1;
    k=low;
    // int *temp;
    // temp = new (nothrow) int[11];
    int temp[10];
    while(i<=mid&&j<=high){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;k++;
        }else{
            temp[k] = arr[j];
            j++;k++;
        }
    }
    while(i<=mid){
        temp[k] = arr[i];
        k++;i++;
    }
    while(j<=high){
        temp[k] =arr[j];
        k++;j++;
    }
    int loop;
    for(loop=low;loop<=high;loop++){
        arr[loop] = temp[loop];
    }
}

void sort(int arr[],int low,int high){
    int mid;
    if(low < high){
        mid=low+(high-low)/2;
        sort(arr,low,mid);
        sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void test(){
 int arr[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 };
 //sizeof(arr)/ sizeof(arr[0])
   int n = 10;
   int i=0;
   cout<<"Given array is:"<<endl;
   for (i = 0; i < n; i++)
   cout<< arr[i] <<" ";
   cout<<endl;
   sort(arr,0,11);
   printf("\nSorted array is: \n");
   for (i = 0; i < n; i++)
   cout<< arr[i] <<" ";
}


int main(int argc, char const *argv[]){
    test();
    return 0;
}