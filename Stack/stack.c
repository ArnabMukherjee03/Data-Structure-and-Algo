#include<stdio.h>
#define MAX 100
int top = -1;
int stack[MAX];
void push(int x){
    if(top == MAX){
        printf("Stack Overflow");
    }else{
        stack[++top]=x;
    }
}
int pop(){
    if(top==-1){
        printf("Stack Underflow\n");
        return 0;
    }else{
        return(stack[top--]);
    }
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}
int main(){
    int num;
    int ch=5;
    while(ch!=0){
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("0. Exit\n");

        printf("Enter Your Choice:: ");
        scanf("%d",&ch);

        if(ch==1){
            printf("Enter Data::" );
            scanf("%d",&num);
            push(num);
        }
        if(ch==2){
            if(pop()!=0){
                printf("Delete item:: %d\n",pop());
            }
        }
        if(ch == 3){
            display();
        }
    }
    return 0;
}