#include<stdio.h>

int main(){

   int i,j;
    for( i = 2; i <=30;i++) {
        for( j=2;j<=i;j++){
       //     printf("Value of i= %d and  j = %d\n",i,j);
            if(i%j==0){
                break;
            }
        }
     //   printf("value of i = %d and j =  %d\n",i,j);
        if(i==j){
            printf("%d \n",i);
        }
    }
    return 0;
}