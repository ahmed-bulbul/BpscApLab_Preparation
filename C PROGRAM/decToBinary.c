#include<stdio.h>

int main(){

    int rem,bin=0,place=1,num;
    printf("Enter decimal number :: ");
    scanf("%d",&num);
    while(num){
        rem=num%2;
        printf(" Remainder :: %d\n",rem);
        num=num/2;
        printf("Number ::  %d\n",num);
        bin = bin + (rem*place);
        printf("Binary ::  %d\n",bin);
        place=place*10;
        printf("Place :: %d\n",place);

    }
    printf("\n bin is %d\n :: ",bin);

    return 0;
}