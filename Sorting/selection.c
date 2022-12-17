#include<stdio.h>
#define max 100
// int selectionsort(int array[],int size); 
int selectionsort(int array[],int size){
  for(int step=0;step<size-1;step++){
    int min = step;
    for(int i=step+1;i<size;i++){
      if(array[min]>array[i]){
        min = i;
      }
    }
    //if(min!=0){
      int swap = array[step];
      array[step] = array[min];
      array[min] = swap;
      printf("\nArray Elements after sorting:: ");
  for(int i=0;i<size;i++){
    printf("%d ",array[i]);
  }
    //}
  }
}
int main(){
  int array[max];
  int size;

  printf("Enter Array Size:: ");
  scanf("%d",&size);

  printf("Enter Array Elements:: ");
  for(int i = 0 ;i < size;i++){
      scanf("%d",&array[i]);
      }

      selectionsort(array,size);
}
