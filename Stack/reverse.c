#include <stdio.h>
#include <string.h>

char stack[10][50];
int row=0;

void display()
{
	int i;
	int col;
	for(i=row; i>=0; i--){
		for(col=0; col<strlen(stack[i]); col++){
			printf("%c",stack[i][col]);
		}
		printf(" ");
	}
}
void push(char *str){

	int col=0;
	int i;
	int len = strlen(str);
	
	for(i=0; i<len; i++){
		
		if(str[i] == ' '){
			row++;
			col=0;
		}
		else{
			stack[row][col]=str[i];
			col++;
		}	
	}
}
int main(){
	char input[100];
	printf("Enter the Text ::");
	scanf("%[^\n]s",input); 
	push(input);
	display(input);
}