/* Insertion Sort */

#include<stdio.h>

void insertionSort(int arr[],int n);
int main(){
    int arr[]={5,3,1,4,6,2};
    int size = sizeof(arr)/sizeof(int);
    
    insertionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void insertionSort(int arr[],int n){
    int j,x;
    for(int i=1;i<n;i++){
        j=i-1;
        x=arr[i];
        while(arr[j]>x && j>-1){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}