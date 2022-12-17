#include<stdio.h>
#define size 5
int front = -1;
int end = -1;
int queue[size];
int te = 0;
void insertion(int item){
    if((front == end + 1) || (front == 0 && end == size - 1)){
        printf("Queue is full");
    }else{
        if (front == -1) front = 0;
        end =(end+1)%size;
        queue[end]=item;
        te++;
    }
}
int deletion(){
    int x;
    if(front==-1){
        printf("Queue is empty");
    }else{
        x = queue[front];
        front = (front+1)%size;
        te--;
        return x;
    }
}
int display(){
    int i;
    int val = front;
    for(i=0;i<te;i++){
        printf("%d\n",queue[val]);
        val = (val+1)%size;
    }
}

int main()
{
    int num;
    int ch=5;
    while(ch!=0){
        printf("1.Insert\n");
        printf("2.Deletion\n");
        printf("3.Display\n");
        printf("0.Exit\n");
    printf("Enter your choice:: ");
    scanf("%d",&ch);
    if(ch==1){
            printf("Enter Data::" );
            scanf("%d",&num);
            insertion(num);
        }
        if(ch==2){
            printf("Delete item:: %d\n",deletion());
        }
        if(ch == 3){
            display();
        }
    }

    return 0;
}