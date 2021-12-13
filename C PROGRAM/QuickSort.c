

#include<stdio.h>

void quicksort(int number[25],int first,int last){

    int left, right, pivot, temp;
    if(first<last){

        pivot=first;
        left=first;
        right=last;

        while(left<right){

            while(number[right]>number[pivot])
            right--;
            while(number[left]<=number[pivot] && left<last)
            left++;

            if(left<right){
                temp=number[left];
                number[left]=number[right];
                number[right]=temp;
            }
        }

        temp=number[pivot];
        number[pivot]=number[right];
        number[right]=temp;

        quicksort(number,first,right-1);
        quicksort(number,right+1,last);
    }
}
int main(){
  
    int i, count, number[25];

    printf("Enter some elements (Max. - 25): ");
    scanf("%d",&count);

    printf("Enter %d elements: ", count);
    for(i=0;i<count;i++)
    scanf("%d",&number[i]);

    quicksort(number,0,count-1);
    printf("The Sorted Order is: ");

    for(i=0;i<count;i++)
    printf(" %d",number[i]);


    return 0;
}
