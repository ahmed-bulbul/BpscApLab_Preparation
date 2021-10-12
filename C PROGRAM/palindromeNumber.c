#include<stdio.h>

int main(){

    int number,temp,rem,sum=0;
    printf("Enter number:: ");
    scanf("%d",&number);

    temp = number;

    while(temp>0){
        
        rem=temp%10;
        sum=(sum*10)+rem;
        temp=temp/10;
    }
    
    if(sum==number){
        printf("Number is palindrome");
    }else{
        printf("Number is not palindrome");
    }


    return 0;
}