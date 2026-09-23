#include<stdio.h>
int linearsearch(int arr[],int size,int key, int i){
  while(i<size){
    if(arr[i]==key){
      return i;
    }
    return linearsearch(arr,size,key,i+1);
  }
  return -1;
  }

int main(){
  int arr[]={10,70,20,30,2};
  int size =sizeof arr/sizeof (arr[0]);
  int key=2;
  int i = 0;
  int result=linearsearch(arr,size,key,i);
  if(result!= -1){
    printf("found the index %d\n",result);
  }
  else{
    printf("not found\n");
  }

  
}