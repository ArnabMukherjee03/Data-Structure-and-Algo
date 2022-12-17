// Stack using Linked list
// Insert at Front
// Delete from Front
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int x){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = top;
    top = temp;
}
int pop(){
    struct node *temp;
    if(top == NULL){
        printf("Stack Underflow\n");
        return 0;
    }else{
        int temp_data = top->data;
        temp = top;
        top = top->next;
        free(temp);
        return temp_data;
    }
}
void display(){
    struct node *dis = top;
    while(dis->next!=NULL){
        printf("%d\n",dis->data);
        dis = dis->next;
    }
    printf("%d\n",dis->data);
}
int main(){
    int ch=5;
    int num;
    while(ch!=0){
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");

        printf("Enter Your Choice:: ");
        scanf("%d",&ch);

        if(ch==1){
            printf("Enter Value:: ");
            scanf("%d",&num);
            push(num);
        }
        if(ch==2){
            if(pop()!=0){
            printf("Delete Item:: %d\n",pop());
            }
        }
        if(ch==3){
            display();
        }
        if(ch==4){
            break;
        }
    }
    return 0;
}