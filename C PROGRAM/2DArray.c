#include<stdio.h>

int main(){
    int i,j;
    // int A[3][4] = { {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };

    int A[10][10],B[10][10],C[10][10];
    int numberOfRows,numberOfColumns;
    printf("Enter number of rows and columns :: ");
    scanf("%d %d",&numberOfRows,&numberOfColumns);


    // scanning matrix A
    printf("Enter elements for Matrix A : \n");
    for( i=0;i<numberOfRows;i++){
        for( j=0;j<numberOfColumns;j++){
            printf("A[%d] [%d] = ", i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");

    //Scanning matrix B
    printf("Enter elements for Matrix B : \n");
    for( i=0;i<numberOfRows;i++){
        for( j=0;j<numberOfColumns;j++){
            printf("B[%d] [%d] = ", i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("==========================\n");

//printing matrix A
    printf("A = ");
    for(int i=0;i<numberOfRows;i++){
        printf("\t");
        for(int j=0;j<numberOfColumns;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    
    //printing matrix B
    printf("B = ");
    for(int i=0;i<numberOfRows;i++){
        printf("\t");
        for(int j=0;j<numberOfColumns;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("==========================\n");

    //adding matrix
    for(int i=0;i<numberOfRows;i++){

        for(int j=0;j<numberOfColumns;j++){
            C[i][j]=A[i][j] + B[i][j];
        }
    }

    //printing C Matrix
    printf("A + B = ");
    for(int i=0;i<numberOfRows;i++){
        
        for(int j=0;j<numberOfColumns;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    return 0;
}