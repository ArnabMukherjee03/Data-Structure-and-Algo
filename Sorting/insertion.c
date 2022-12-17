#include<stdio.h>
#define max 100
void insertion_sort(int array[],int size){
    for(int i=1;i<=size-1;i++){
        int key = array[i];
        int temp = i-1;
        while(array[temp]>key && temp>=0){
            array[temp+1] = array[temp];
            temp-=1;
        }
        array[temp+1] = key;
    }

    printf("Array elements after sorting:: ");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}
int main(){
    int array[]={40,30,10,20,32};
    int size = sizeof(array)/sizeof(array[0]);
    insertion_sort(array,size);
}
