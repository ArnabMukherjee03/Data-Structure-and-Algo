#include<stdio.h>
#include<stdlib.h>
int main(){
    int *array,size;
    int i,j;

    printf("Enter Array size:: ");
    scanf("%d",&size);

    array = (int*)malloc(size*sizeof(int));

    printf("Enter the array elements::\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    int max = array[1];
    int min = array[1];

    for(i=0;i<size;i++)
    {
        if(array[i]<min){
            min = array[i];
        } else if(array[i]>max){
            max = array[i];
        }
    }
    
    int x = min%10;
    int min_final=min-x;

    int y = max%10;
    int max_final = (max-y)+10;

    int count = 0;

    printf(" Group    Freq\n");

    for(i=min_final;i<max_final;i+=10){
        int start = i;
        int end = i+10;
        for(j=0;j<size;j++){
           if(array[j]>=start && array[j]<=end)
           {
            count++;
           }
        }
        printf("%d - %d  :: %d\n",start,end,count);
        count=0;
    }
    return 0;
}