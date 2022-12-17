#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;

void InsertAtFront(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void InsertAtEnd(int x){
     struct node* ptr = head;
     while(ptr->next!=0){
        ptr = ptr->next;
     }
     struct node* temp = (struct node*)malloc(sizeof(struct node));
     temp->data = x;
     ptr->next = temp;
     temp->next = NULL;
}
void InsertAtMid(int val,int x){
    struct node* ptr = head;
    while(ptr->next->data==val){
        ptr = ptr->next;
    }
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = ptr->next;
    ptr->next = temp;
}
void display(){
    struct node* dis = head;
    while(dis!=NULL){
        printf("%d ",dis->data);
        dis = dis->next;
    }
}
int main(){
    InsertAtFront(10);
    display();
    printf("\n");
    InsertAtFront(20);
    display();
    printf("\n");
    InsertAtEnd(50);
    display();
    printf("\n");
    InsertAtMid(10,30);
    display();
    printf("\n");


}