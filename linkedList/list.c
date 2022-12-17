#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
void display(){
  struct node* dis = head;
  while(dis!=NULL){
    printf("%d ",dis->data);
    dis = dis->next;
  }
}
int main(){
    struct node* p;
    struct node* q;
    for(int i = 0;i<5;i++){
        p = (struct node*)malloc(sizeof(struct node));
        printf("Enter data:: ");
        scanf("%d",&p->data);
        if(p==NULL){
            q = head;
            while(q->next!=NULL){
                q = q->next;
            }
            p->next = q->next;
            q->next = p;
        }else{
            p->next = head;
            head = p;
        }

    }
    display();
}