 #include<stdio.h>
int binarysearch(int arr[],int size, int key){
   int low=0,high=size-1;
   while(low<=high){
   int mid=(low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(key>arr[mid]){
        low= mid + 1;
    }
    else{
        high= mid - 1;
    }  
   }
return -1;
}


 int main(){
    int arr[]={5,10,15,20,25,30,35};
    int size=sizeof arr/sizeof (arr[0]);
    int key=30;
    int result= binarysearch(arr,size,key);
    if(result!= -1){
        printf("found the index %d\n",result);
    }
    else{
        printf("not found\n");
    }
    return 0;

 }

