#include<stdio.h>
int main(){
    int array[] = {23,43,12,35,10};
    int size = 5,i;
    for(int step = 0 ; step<size-1;step++){
        int min = step;
        for(i=step+1;i<size;i++){
            if(array[min]>array[i]){
                min = i;
            }
        }
        int swap = array[step];
        array[step]= array[min];
        array[min] = swap;
    }
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
}