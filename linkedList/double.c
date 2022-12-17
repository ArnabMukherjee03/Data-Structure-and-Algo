#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head = NULL;
struct node* tail = NULL;
void insertAtBeg(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    if(head == NULL){
        temp->next = NULL;
        temp->prev = NULL;
        head = tail = temp;
    }else{
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}
void insertAtEnd(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    if(tail == NULL){
        temp->prev = temp->next = NULL;
        head = tail = temp;
    }else{
    temp->next = NULL;
    temp->prev = tail;
    tail->next = temp;
    tail=temp;
    } 
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
void insertPos(int x,int val){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    struct node* ptr = head;
    temp->data = x;
    while(ptr->next->data!=val){
        // printf("%d",ptr->data);
        ptr=ptr->next;
    }
    ptr = ptr->next;
    // printf("%d",ptr->data);
    temp->prev=ptr;
    temp->next=ptr->next;
    ptr->next=temp;
    temp->next->prev=temp;
}
void deleteF(){
    struct node* temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);

}
void display(){
    struct node* dis = head;
    while(dis!=NULL){
        printf("%d ",dis->data);
        dis = dis->next;
    }
}
int main(){
    insertAtBeg(10);
    insertAtBeg(20);
    insertAtEnd(70);
    insertAtEnd(100);
    // insertPos(40,10);
    InsertAtEnd(90);
    display();
    insertPos(50,70);
    insertPos(50,100);
    insertPos(14,10);
    deleteF();
    printf("\n");
    display();
    insertAtBeg(40);
    printf("\n");
    display();
}