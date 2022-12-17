#include<stdio.h>
#define max 100
// void bubbleSort(int array[],int size);
void bubbleSort(int array[],int size){
    int temp = 0;
    for(int step = 0; step < size-1; step++){
        for(int i = 0;i < size-step-1; i++){
            if(array[i]>array[i+1]){
                 temp = array[i];
                 array[i] = array[i+1];
                 array[i+1] = temp;
            }
        }
    }

    printf("Array elements after sorting:: ");
    for(int i = 0 ; i < size; i++ ){
        printf("%d ",array[i]);
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

    bubbleSort(array,size);
}
