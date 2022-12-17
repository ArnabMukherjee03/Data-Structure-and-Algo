#include<stdio.h>
int main(){
    // Variables
    int i,j,size;
    int n = 0;
    int array[100][100];

    // Works only when n is odd
    printf("Enter the order of the Matrix:: ");
    scanf("%d",&size);

    // intially assign all the elements as 0

    for(i=0;i<size;i++){
	for(j=0;j<size;j++){
	    array[i][j] = 0;
	}
    }

   // Checking whether the value is odd or even
    if(size%2!=0){
	// Initialize position for 1
	i = size/2;
	j = size - 1;

	//One by one put all values in magic square
	for(n=1;n<=size*size;n++){
	    array[i][j]=n;
	    i = i-1;
	    j = j+1;
	    //2nd condition
	    if(array[i][j]!=0){
		j = j-2;
		i = i+1;
	    }
	    //3rd Condition
	    else if(i<0&&j==size){
		i = 0;
		j = size-2;
	    }else{
		// 1st Condition
		// if row position become -1
		if(i < 0){
		    i = size - 1;
		}
		// if col position become equal to order of the matrix
		else if(j == size){
		    j = 0;
		}
	    }
	}
	// Printing magic Square
	for(i=0;i<size;i++){
	    for(j=0;j<size;j++){
		printf("%4d",array[i][j]);
	    }
	    printf("\n");
	}
    } else{
	printf("Magic Square only run for odd no");
    }
    return 0;
}