// reverse an array

#include<stdio.h>

int main(){
    
    int arr[100],temp[100],n,i,j,init=0;

    printf("Enter array number of elements:: ");
    scanf("%d",&n);


    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(j=n-1;j>=0;j--){
        temp[j]=arr[init];
        init++;
    }

    for(int i=0;i<n;i++){
        printf("%d ",temp[i]);
    }

    return 0;
}