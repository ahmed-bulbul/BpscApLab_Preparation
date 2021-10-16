#include <stdio.h>
#include <stdlib.h>


long factorial (int level, long number){
    int result;
    printf("[%03d] Calculating: %d\n", level, number);

    if(number <= 1)
    {
        result = 1;
    }
    else
    {
        result = number * factorial(level+1, number - 1);
    }

    printf("[%03d] Returning:   %d\n", level, result);
    return result;
}
int main(){
    int i;
    for(i = 0; i <= 10; i++)
    {
        printf("%2d ! = %ld\n", i, factorial(0, i));
    }
    return 0;
}