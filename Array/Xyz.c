
#include<stdio.h>
int main(){
    int array[5];
    int size = sizeof(array)/sizeof(int);
    int i;
    printf("Enter Array :: ");
    for(i=0;i<size;i++){
        //Input array elements
        scanf("%d",&array[i]);
    }
    printf("Array elements:: ");
    //Output
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}