#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;
void insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
//    printf("\nInsertion is Success!!!\n");
}
int delete()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d\n",temp->data);
	 temp = temp -> next;
      }
      printf("%d\n",temp->data);
   }
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
            insert(num);
        }
        if(ch==2){
            delete();
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