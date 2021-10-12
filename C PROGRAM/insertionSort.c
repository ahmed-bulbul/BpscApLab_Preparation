#include<stdio.h>

int main(){


  int arr[]={5,40,2,1,5,9};
  int size =sizeof(arr)/sizeof(arr[0]);

  for(int i=1;i<size;i++){

    int value = arr[i];
    int hole = i;

    while(hole>0 && value  < arr[hole-1]){
        arr[hole] = arr[hole-1];
        hole--;
    }
    arr[hole]=value;
  }

  //printing the array
  for(int i=0;i<size;i++){
    printf("%d  ",arr[i]);
  }

}
