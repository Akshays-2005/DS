#include<stdio.h>
struct Node{
    int data;
    struct Node *link;
};
typedef struct Node node;
node *start=NULL,*curr,*temp,*new1,*pre,*next;
void create();
void display();
void delete_first();
void delete_last();
void delete_specific_element();
int ch,pos,ele;
char c;
void main(){
    while(1){
        printf("\n1.Create\n2.Delete First element\n3.Delete last element\n4.Delete specific element\n5.Display\n6.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:create();
                    break;
            case 2:delete_first();
                    break;
            case 3:delete_last();
                    break;
            case 4:delete_specific_element();
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
void delete_first(){
    if(start==NULL){
        printf("Linked list is empty");
        return;
    }
    temp=start;
    start=start->link;
    free(temp);
}
void delete_last(){
    if(start==NULL){
        printf("Linked list is empty");
        return;
    }
    if(start->link==NULL){
        temp=start;
        start=NULL;
        free(temp);
        return;
    }
    pre=NULL;
    next=start;
    while(next->link!=NULL){
        pre=next;
        next=next->link;
    }
    pre->link=NULL;
    free(next);
}
void delete_specific_element(){
    printf("Enter element to be deleted:");
    scanf("%d",&ele);
    if(start==NULL){
        printf("Linked list is empty");
        return;
    }
    if(start->data==ele){
        temp=start;
        start=start->link;
        free(temp);
        return;
    }
    pre=NULL;
    next=start;
    while(next->data!=ele && next->link!=NULL){
        pre=next;
        next=next->link;
    }
    if(next->data==ele){
        pre->link=next->link;
        free(next);
        return;
    }
    else{
        printf("Element not found");
    }
}
