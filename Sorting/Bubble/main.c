#include<stdio.h>

void bubbleSort(int arr[],int size);

int main(){
    int arr[]={5,3,1,4,6,2};
    int size = sizeof(arr)/sizeof(int);
    
    bubbleSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void swap(int * a,int * b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
void bubbleSort(int arr[],int size){
    int fl=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]) {
                swap(&arr[j],&arr[j+1]);
                fl=1;
            };
        }
        if (fl==0) break;
    }
    
}