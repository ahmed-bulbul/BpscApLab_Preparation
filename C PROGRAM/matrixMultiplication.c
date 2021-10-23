#include<stdio.h>

int main(){

    int A[10][10],B[10][10],C[10][10],i,j,k,r1,c1,r2,c2,sum=0;

    printf("Enter number of rows and columns for First Matrix :");
    scanf("%d %d",&r1,&c1);

    printf("Enter number of rows and columns for Second Matrix :");
    scanf("%d %d",&r2,&c2);

    while(c2!=r1){
        printf("Colums of first matrix and rows of second matrix must be equal \n");
        printf("Enter number of rows and columns for First Matrix :");
        scanf("%d %d",&r1,&c1);

        printf("Enter number of rows and columns for Second Matrix :\n");
        scanf("%d %d",&r2,&c2);

    }

// input taking for matrix 1
    printf("Enter value for first matrix : \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("A[%d][%d] is = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

//input taking for matrix 2
    printf("Enter value for second matrix : \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("A[%d][%d] is = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

//printing matrix1
    printf("A = \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
//printing matrix 2
    printf("B = \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


// matrix multiplication
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
            sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }
// print final matrix1
    printf("Final = \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }





}