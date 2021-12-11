
#include <stdio.h>
int factorial(int);
long find_npr(int,int);
long find_ncr(int,int);


int main()
{
    int n,r;
    double npr,ncr;
    printf("Enter value of n and r: ");
    scanf("%d %d",&n,&r);
    npr=find_npr(n,r);
    ncr=find_ncr(n,r);
    
    printf("%d P %d =%lf\n",n,r,npr);
    printf("%d C %d =%lf\n",n,r,ncr);

    return 0;
}

long find_npr(int n,int r){
    
    return factorial(n)/factorial(n-r);
}

long find_ncr(int n,int r){
    
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int factorial(int n){
    if(n==1 || n==0)
        return 1;
    else
        return n*factorial(n-1);
}
