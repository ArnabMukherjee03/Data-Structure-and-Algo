#include<stdio.h>
#define max 100
int main(){
    int array[max];
    int size;
    int i,k,step;
    int temp = 0;

    printf("Enter Array Size:: ");
    scanf("%d",&size);

    printf("Enter Array Elements:: ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    // Value of K is smaller than Array Size
    printf("Enter the Value of K:: ");
    scanf("%d",&k);

    for(step=0;step<size-1;step++){
        for(i=0;i<size-step-1;i++){
            if(array[i]>array[i+1]){
                temp = array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
    
    if(k<size){
        printf("The %dth smallest element in the array:: ",k);
        for(i=0;i<size;i++){
            if(i==(k-1)){
                printf("%d",array[i]);
            }
        }
    }else{
        printf("Value of k is not smaller than size of array");
    }
    return 0;
}