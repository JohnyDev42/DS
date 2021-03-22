#include<stdio.h>

void selectionSort(int arr[],int size);

int main(){
    int arr[]={5,3,1,4,6,2};
    int size = sizeof(arr)/sizeof(int);
    
    selectionSort(arr,size);
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

void selectionSort(int arr[],int size){
    int i,j,k;
    for(i=0;i<size;i++){
        for(j=k=i;j<size;j++){
            if(arr[j]<arr[k])
                k=j;
            };
            if(i!=k) swap(&arr[i],&arr[k]);
        }
        
    }
    
