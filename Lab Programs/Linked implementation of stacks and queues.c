//Linked implementation of Queues and Stacks
Code:
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *link;
};
typedef struct Node node;
node *front=NULL,*rear=NULL,*temp,*new1,*pre,*next,*top=NULL;
void queues();
void insert();
void delete();
void display1();
void stacks();
void push();
void pop();
void display2();
int ch;
void main(){
    while(1){
        printf("\n1.Linked implementation of queues\n2.Linked implementation of stacks\n3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:queues();
                    break;
            case 2:stacks();
                    break;
            case 3:exit(0);
                    break;
            }
        }
}
void queues(){
        while(1){
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Return\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:insert();
                    break;
            case 2:delete();
                    break;
            case 3:display1();
                    break;
            case 4:return;
                    break;
            }
        }
}
void stacks(){
        while(1){
        printf("\n1.Push\n2.Pop\n3.Display\n4.Return\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:display2();
                    break;
            case 4:return;
                    break;
            }
        }
}
void push(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new1->data);
    if(top==NULL){
        top=new1;
        new1->link=NULL;
        return;
    }
    new1->link=top;
    top=new1;
}
void pop(){
    if(top==NULL){
        printf("Linked list is empty");
        return;
    }
    temp=top;
    top=top->link;
    free(temp);
}
void display2(){
    if(top==NULL){
        printf("Linked list is empty");
        return;
    }
    printf("Elements in linked list are:\n");
    temp=top;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
void insert(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new1->data);
    if(front==NULL && rear==NULL){
        front=new1;
        rear=new1;
        new1->link=NULL;
        return;
    }
    temp=rear;
    while((temp->link)!=NULL){
        temp=temp->link;
    }
    temp->link=new1;
    new1->link=NULL;
}
void delete(){
    if(front==NULL && rear==NULL){
        printf("Linked list is empty");
        return;
    }
    temp=front;
    front=front->link;
    free(temp);
}

void display1(){
    if(front==NULL){
        printf("Linked list is empty");
        return;
    }
    temp=front;
    printf("Elements in the linked list are:\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
Output:
1.Linked implementation of queues
2.Linked implementation of stacks
3.Exit
Enter your choice:1

1.Insert
2.Delete
3.Display
4.Return
Enter your choice:1
Enter element:10

1.Insert
2.Delete
3.Display
4.Return
Enter your choice:1
Enter element:20

1.Insert
2.Delete
3.Display
4.Return
Enter your choice:3
Elements in the linked list are:
10      20
1.Insert
2.Delete
3.Display
4.Return
Enter your choice:2

1.Insert
2.Delete
3.Display
4.Return
Enter your choice:3
Elements in the linked list are:
20
1.Insert
2.Delete
3.Display
4.Return
Enter your choice:2

1.Insert
2.Delete
3.Display
4.Return
Enter your choice:3
Linked list is empty
1.Insert
2.Delete
3.Display
4.Return
Enter your choice:4

1.Linked implementation of queues
2.Linked implementation of stacks
3.Exit
Enter your choice:2

1.Push
2.Pop
3.Display
4.Return
Enter your choice:1
Enter element:10

1.Push
2.Pop
3.Display
4.Return
Enter your choice:1
Enter element:20

1.Push
2.Pop
3.Display
4.Return
Enter your choice:3
Elements in linked list are:
20      10
1.Push
2.Pop
3.Display
4.Return
Enter your choice:2

1.Push
2.Pop
3.Display
4.Return
Enter your choice:3
Elements in linked list are:
10
1.Push
2.Pop
3.Display
4.Return
Enter your choice:2

1.Push
2.Pop
3.Display
4.Return
Enter your choice:3
Linked list is empty
1.Push
2.Pop
3.Display
4.Return
Enter your choice:4

1.Linked implementation of queues
2.Linked implementation of stacks
3.Exit
Enter your choice:3
