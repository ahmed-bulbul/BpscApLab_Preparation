#include<stdio.h>

int main(){

    int arr[7]={1,2,2,3,4,5,5},temp[7];
    int j=0;

    for(int i=0;i<7-1;i++){
        if(arr[i] !=arr[i+1]){
          //  printf(" j  val is =%d \n",j);
            temp[j]=arr[i];
            j++;
        }
    }
    // printf("value of j = %d and arr[6]= %d \n",j,arr[6]);
    temp[j]=arr[7-1];

    for(int i=0;i<=j;i++){
        arr[i]=temp[i];
    }

    for(int i=0;i<=j;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}