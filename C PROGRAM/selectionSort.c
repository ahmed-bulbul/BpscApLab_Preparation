#include <stdio.h>
int main()
{
  int arr[]={5,40,2,1,5,9};
  int size =sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){

    int min_index=i;
    for(int j=i+1;j<size;j++){
        if(arr[j]<arr[min_index]){
            min_index=j;
        }
    }

    int temp = arr[i];
    arr[i]=arr[min_index];
    arr[min_index]=temp;

  }

  //print
  for(int i=0;i<size;i++){
    printf("%d  ",arr[i]);
  }

  return 0;
}
