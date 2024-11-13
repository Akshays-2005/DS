#include<stdio.h>
struct Node{
    int data;
    struct Node *link;
};
typedef struct Node node;
node *start=NULL,*curr,*temp,*new1;
void create();
void display();
void insert_beg();
void insert_end();
void insert_at_given_positon();
int ch,pos;
char c;
void main(){
    while(1){
        printf("\n1.Create\n2.Insert Beginnig\n3.Insert End\n4.Insert at given position\n5.Display\n6.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:create();
                    break;
            case 2:insert_beg();
                    break;
            case 3:insert_end();
                    break;
            case 4:insert_at_given_position();
                    break;
            case 5:display();
                    break;
            case 6:exit(0);
                    break;
        }
    }
}
void create(){
    do{
        new1=(node*)malloc(sizeof(node));
        printf("Enter element:");
        scanf("%d",&new1->data);
        if(start==NULL){
            start=new1;
            curr=new1;
        }else{
            curr->link=new1;
            curr=new1;
        }
        printf("If you want to add another element (Y/N):");
        scanf("%s",&c);
    }while(c=='Y' || c=='y');
    curr->link=NULL;
}
void display(){
    if(start==NULL){
        printf("Linked list is empty");
        return;
    }
    printf("Elements in linked list are:\n");
    temp=start;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
void insert_beg(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new1->data);
    if(start==NULL){
        start=new1;
        new1->link=NULL;
        return;
    }
    new1->link=start;
    start=new1;
}
void insert_end(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new1->data);
    if(start==NULL){
        start=new1;
        new1->link=NULL;
        return;
    }
    temp=start;
    while((temp->link)!=NULL){
        temp=temp->link;
    }
    temp->link=new1;
    new1->link=NULL;
}
void insert_at_given_position(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new1->data);
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos==1){
        new1->link=start;
        start=new1;
        return;
    }
    temp=start;
    int i=1;
    while(temp!=NULL && i<pos-1){
        temp=temp->link;
        i++;
    }
    if(temp==NULL){
        printf("Entered position is greater than number of elements");
        return;
    }
    new1->link=temp->link;
    temp->link=new1;
}
