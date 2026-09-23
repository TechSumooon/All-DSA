#include<stdio.h>
int binarysearch(int arr[],int size, int key,int low,int high){
    if(low>high){
        return -1;
    }
    int mid = (low + high)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(key<arr[mid]){
        return binarysearch(arr,size,key,low,mid-1);
    }
    else{
        return binarysearch(arr,size,key,mid+1,high);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int size = sizeof arr/ sizeof(arr[0]);
    int key = 0;
    int result = binarysearch(arr,size,key,0,size-1);
    if(result!= -1){
        printf("found the index %d\n",result);
    }
    else{
        printf("not found\n");
    }


    }
