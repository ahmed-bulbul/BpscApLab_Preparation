#include<stdio.h>

int factorial(int n);
int main(){
    printf("Enter number");
    int number;
    scanf("%d",&number);
    printf("%d ",factorial(number));
    return 0;
}

int factorial(int n){
    if(n==1)
        return 1;
        
    return n*factorial(n-1);    
}