#include<stdio.h>

int main(){
    char lower;
    printf("Enter any lowercase letters:: ");
    scanf("%c",&lower);  //a==97,A=65
    printf("%c",lower-32);
    return 0;
}