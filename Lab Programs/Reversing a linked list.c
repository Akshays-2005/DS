#include<stdio.h>
void reverse();
void create();
void display();
struct Node{
    int data;
    struct Node *link;
};
typedef struct Node node;
node *start,*new1,*temp,*a,*b=NULL,*c=NULL,*curr;
int ch;
void main(){
    while(1){
        printf("\n1.Create a linked list\n2.Reverse a linked list\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:create();
                    break;
            case 2:reverse();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
                    break;
        }
    }
}
void create(){
    do{
        new1=(node*)malloc(sizeof(node));
        printf("Enter value:");
        scanf("%d",&new1->data);
        if(start==NULL){
            start=new1;
            curr=new1;
        }else{
            curr->link=new1;
            curr=new1;
        }
        printf("Do you want to add another element(Y/N):");
        scanf("%s",&c);
    }while(c=='y' || c=='Y');
    curr->link=NULL;
}
void display(){
    if(start==NULL){
        printf("Linked list is empty");
        return;
    }
    temp=start;
    printf("Elements in the linked list are:\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
void reverse(){
    a=start;
    while(a!=NULL){
        c=b;
        b=a;
        a=a->link;
        b->link=c;
    }
    start=b;
}
