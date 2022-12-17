#include<stdio.h>
#define max 100
int linear_search(int array[],int size,int SearchValue){
    int i;
    for(i=0;i<size;i++){
        if(array[i]==SearchValue){
            return i;
            break;
        }
    }
    return -1;

}
int main(){
    int array[max];
    int SearchValue,i,size; 
    printf("Enter Array Size:: ");
    scanf("%d",&size);
    
    printf("Enter Array Elements:: ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    printf("Enter Search Elements:: ");
    scanf("%d",&SearchValue);

    int result = linear_search(array,size,SearchValue);
    if(result==-1){
        printf("Element not found");
    }else{
        printf("Element found at index:: %d",result);
    }
    return 0;
}