#include<stdio.h>
#include<ctype.h>
#define MAX 100
int top = -1;
char stack[MAX];
char pop(){
    if(top==-1){
        printf("Stack Underflow");
    }else{
        return(stack[top--]);
    }
}
void push(char x){
    if(top == MAX){
        printf("Stack Overflow");
    }else{
        stack[++top]=x;
    }
}
int Priority(char x){
    if(x=='('){
        return 0;
    }
    if(x=='^'){
        return 3;
    }
    if(x=='/'||x=='*'){
        return 2;
    }
    if(x=='+'||x=='-'){
        return 1;
    }
}
int main(){
    char expr[100];
    char *e;
    char x;
    printf("Enter the expression:: ");
    scanf("%s",expr);
    e = expr;
    while(*e !='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }else if(*e == '('){
            push(*e);
        }else if(*e==')'){
            while((x=pop())!='('){
                printf("%c",x);
            }
        }else{
            while(Priority(stack[top])>=Priority(*e))
            printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top!=-1){
        printf("%c",pop());
    }
    return 0;
}