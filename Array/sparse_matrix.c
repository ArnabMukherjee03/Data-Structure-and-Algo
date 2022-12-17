#include<stdio.h>
#include <stdlib.h>
int main(){
    int i,j;
    int col,row;
    int count = 0;

    printf("Enter No of Rows:: ");
    scanf("%d",&row);    
    printf("Enter No of Columns:: ");
    scanf("%d",&col);

    int input[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&input[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(input[i][j]==0){
                count++;
            }
        }
    }
    
    int x = ((row*col)*30)/100;
    int col_sparse = (row*col)-count;
    int sparse[3][col_sparse];

    int k = 0;
    if(count>x){
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(input[i][j]!=0){
                    sparse[0][k] = i;
                    sparse[1][k] = j;
                    sparse[2][k] = input[i][j];
                    k++;
                }
            }
        }
        printf("\nmatrix Without O ::\n");
        for(i=0;i<3;i++){
            for(j=0;j<col_sparse;j++){
                printf("%d ",sparse[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("It's not a Sparse Matrix");
    }

    
}
