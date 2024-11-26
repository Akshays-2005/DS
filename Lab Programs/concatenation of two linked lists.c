//Concatenation of two linked lists
//Code:
#include<stdio.h>
struct Node{
    int data;
    struct Node *link;
};
typedef struct Node node;
node *start1=NULL,*start2=NULL,*temp,*new1,*curr,*start;
void create1();
void create2();
void concatenate();
void display();
int ch;
char c;
void main(){
    while(1){
        printf("\n1.Create 1st linked list\n2.Create 2nd linked list\n3.Concatenate\n4.Display\n5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:create1();
                    break;
            case 2:create2();
                    break;
            case 3:concatenate();
                    break;
            case 4:display();
                    break;
            case 5:exit(0);
                    break;
        }
    }
}
void create1(){
    do{
        new1=(node*)malloc(sizeof(node));
        printf("Enter value:");
        scanf("%d",&new1->data);
        if(start1==NULL){
            start1=new1;
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
void create2(){
    do{
        new1=(node*)malloc(sizeof(node));
        printf("Enter value:");
        scanf("%d",&new1->data);
        if(start2==NULL){
            start2=new1;
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
void concatenate(){
    if(start1==NULL && start2==NULL){
        printf("Linked list is empty");
        return;
    }
    if(start1==NULL){
        start=start2;
        return;
    }
    if(start2==NULL){
        start=start1;
        return;
    }
    temp=start1;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=start2;
    start=start1;
    start1=NULL;
    start2=NULL;
}
/* Output:
1.Create 1st linked list
2.Create 2nd linked list
3.Concatenate
4.Display
5.Exit
Enter your choice:1
Enter value:10
Do you want to add another element(Y/N):y
Enter value:20
Do you want to add another element(Y/N):n

1.Create 1st linked list
2.Create 2nd linked list
3.Concatenate
4.Display
5.Exit
Enter your choice:2
Enter value:30
Do you want to add another element(Y/N):y
Enter value:40
Do you want to add another element(Y/N):n

1.Create 1st linked list
2.Create 2nd linked list
3.Concatenate
4.Display
5.Exit
Enter your choice:3

1.Create 1st linked list
2.Create 2nd linked list
3.Concatenate
4.Display
5.Exit
Enter your choice:4
Elements in the linked list are:
10      20      30      40
1.Create 1st linked list
2.Create 2nd linked list
3.Concatenate
4.Display
5.Exit
Enter your choice:5 */
