#include<stdio.h>
int linearsearch(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;
}
int main(){
  int arr[]={10,20,30,40,50};
  int size=sizeof arr/sizeof (arr[0]);
  int key=30;
  int result=linearsearch(arr,size,key);
if(result!= -1){
  printf("found the index:%d\n",result);
}
else{
  printf("not found");
}
}




