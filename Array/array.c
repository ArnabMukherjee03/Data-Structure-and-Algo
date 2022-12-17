#include<stdio.h>
#include<stdlib.h>
int main(){
    int *array,size;
    int i,x,j;
    int delete;

    printf("Array Size:: ");
    scanf("%d",&size);

    array = (int*)malloc(size*sizeof(int));

    printf("Enter the array elements::\n");
    for(i=0;i<size;i++)
    {
        printf("Array[%d]:: ",i);
        scanf("%d",array+i);
    }

    printf("Array Values::");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(array+i));
    }

    printf("\nEnter the value you want to delete:: ");
    scanf("%d",&delete);

    // Searching
    
    for(i=0;i<size;i++){
        if(*(array+i)==delete){
            x = i;
            break;
        }
    }

    // printf("%d",x);

    for(j=x;j<size;j++){

        *(array+j) = *(array+(j+1));
    }

    size = size-1;

    printf("After Delete array elements:: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(array+i));
    }



    return 0;

    

}