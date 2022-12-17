#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head = NULL;
void insert_at_front(int x){
struct node *temp;
temp = (struct node*)malloc(sizeof(struct node));
temp->data = x;
temp->next = head;
head = temp;
}
void insert_at_end(int x){
struct node *ptr = head ;
while(ptr->next!=NULL){
ptr=ptr->next;
}
struct node *temp = (struct node*)malloc(sizeof(struct node));
temp->data = x;
ptr->next = temp;
temp->next = NULL;
}
void insert_at_mid(int x,int val){
struct node *ptr = head;
struct node *temp = (struct node*)malloc(sizeof(struct node));
temp->data = x;
while(ptr->next->data!=val){
ptr = ptr->next;
}
temp->next = ptr->next;
ptr->next = temp;
}
void display(){
struct node *dis = head;
while(dis->next!=NULL){
printf("%d ",dis->data);
dis = dis->next;
}
printf("%d",dis->data);
}
void delete_from_front(){
struct node *temp;
temp = head;
head = head->next;
free(temp);
}
void delete_from_anyposition(int val){
struct node *ptr = head;
struct node *temp = (struct node*)malloc(sizeof(struct node));
while(ptr->next->data==val){
ptr=ptr->next;
}
// printf("%d",ptr->data);
temp = ptr->next;
ptr->next = temp->next;
free(temp);

}
int main(){
int no;
int val;
int ch = 5;
while(ch!=0){
printf("1. Insert at Front\n");
printf("2. Insert at End\n");
printf("3. Insert at any position\n");
printf("4. Delete from Front\n");
printf("5. Delete from any pos\n");
printf("6. Display\n");

printf("Enter Your choice:: ");
scanf("%d",&ch);

if(ch==1){
printf("Enter Data:: ");
scanf("%d",&no);
insert_at_front(no);
}
if(ch==2){
printf("Enter Data:: ");
scanf("%d",&no);
insert_at_end(no);
}
if(ch==3){
printf("Add element after:: ");
scanf("%d",&val);
printf("Enter Data:: ");
scanf("%d",&no);
insert_at_mid(no,val);
}
if(ch==4){
delete_from_front();
}
if(ch==5){
printf("Delete after:: ");
scanf("%d",&val);
delete_from_anyposition(val);
}
if(ch==6){
display();
printf("\n");
}
}
return 0;
}