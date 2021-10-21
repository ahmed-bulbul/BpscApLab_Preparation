#include<stdio.h>

int main(){

    int arr[5]={4,2,12,7,8};

    int max=arr[0];

    for(int i=0;i<5;i++){
        if(arr[i+1]>max){
            max=arr[i+1];
        }
    }
    printf("Max is %d",max);
    return 0;

}