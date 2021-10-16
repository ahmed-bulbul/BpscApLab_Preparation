#include<stdio.h>
#include<math.h>
int main(){
    int num,dec=0,place=0,rem=0;
    printf("Enter binary number:: ");
    scanf("%d",&num);
    while(num){
        rem = num%10;
        if(rem==1){
            dec=dec+(pow(2,place));
        }
        num=num/10;
        place++;
    }
    printf("%d\n",dec);
    return 0;
}