#include<stdio.h>
#define max 100
int binarySearch(int array[],int size,int sv){
    int start = 0;
    int end = size-1;
    int mid = 0;
    while (start<=end)
    {
        mid = (start+end)/2;
        if(array[mid]==sv){
            return mid;
            break;
        }else if(array[mid]<sv){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }

    return -1;
    
}
int main(){
    int array[max];
    int size;
    int sv;
    
    printf("Enter Array size:: ");
    scanf("%d",&size);

    printf("Enter Array Elements:: ");
    for(int i = 0; i< size; i++){
        scanf("%d",&array[i]);
    }

    printf("Enter Search Value:: ");
    scanf("%d",&sv);

    int result = binarySearch(array,size,sv);

    if(result!=-1){
        printf("Element Found at %d ",result);
    }else{
        printf("Element not found");
    }

}