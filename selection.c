#include<stdio.h>
void selectionsort(int arr[],int size){
    for(int step=0;step<size-1;step++){
        int min_idx=step; for(int i=step-1;i<size;i++){
            if(arr[i]<arr[min_idx]){
                min_idx=i;
            }
        }
        int temp=arr[min_idx];
        arr[min_idx]=arr[step];
        arr[step]=temp;
        printf("pass %d:", step+1);
        for(int i=0;i<size;i++){
            printf(" %d",arr[i]);
        }
        printf("\n");
    }
}
int main(){
    int arr[]={12,3,45,23,1,3,9};
    int size=sizeof arr/sizeof(arr[0]);
    selectionsort(arr,size);
    printf("sorted array: \n");
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
}
