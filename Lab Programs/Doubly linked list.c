//Doubly linked list
//Code:
#include<stdio.h>
struct Node{
    struct Node *pre;
    int data;
    struct Node *next;
};
typedef struct Node node;
node *new1,*curr,*temp,*start=NULL,*new2;
void create();
void insert_beg();
void insert_end();
void insert_at_req_position();
void delete_first();
void delete_last();
void delete_specific_element();
void display();
int ch,pos,ele;
char c;
void main(){
    while(1){
        printf("\n1.Create DLL\n2.Insert at beginning\n3.Insert at last\n4.Insert at required position\n5.Delete first element\n6.Delete last element\n7.Delete specific element\n8.Display\n9.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:create();
            break;
            case 2:insert_beg();
            break;
            case 3:insert_end();
            break;
            case 4:insert_at_req_position();
            break;
            case 5:delete_first();
            break;
            case 6:delete_last();
            break;
            case 7:delete_specific_element();
            break;
            case 8:display();
            break;
            case 9:exit(0);
            break;
        }
    }
}
void create(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter the data:");
    scanf("%d",&new1->data);
    new1->pre=NULL;
    start=new1;
    curr=new1;
    while(1){
        printf("Do you want to add another element (Y/N):");
        scanf("%s",&c);
        if(c=='Y' || c=='y'){
            new1=(node*)malloc(sizeof(node));
            printf("Enter element:");
            scanf("%d",&new1->data);
            new1->pre=curr;
            curr->next=new1;
            curr=new1;
        }
        else{
            curr->next=NULL;
            return;
        }
    }

}
void insert_beg(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new1->data);
    if(start==NULL){
        new1->pre=NULL;
        new1->next=NULL;
        start=new1;
        return;
    }
    new1->pre=NULL;
    new1->next=start;
    start->pre=new1;
    start=new1;
}
void insert_end(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new1->data);
    if(start==NULL){
        new1->pre=NULL;
        new1->next=NULL;
        start=new1;
        return;
    }
    temp=start;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new1;
    new1->pre=temp;
    new1->next=NULL;
}
void insert_at_req_position(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",&new1->data);
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos==1){
        new1->pre=NULL;
        new1->next=start;
        start->pre=new1;
        start=new1;
        return;
    }
    int i=1;
    temp=start;
    while(i<pos-1 && temp!=NULL){
        temp=temp->next;
        i++;
    }
    if(i==pos-1){
        new1->next=temp->next;
        temp->next->pre=new1;
        new1->pre=temp;
        temp->next=new1;
        return;
    }
    if(temp==NULL){
        printf("Entered position is greater than number of elements");
    }
}
void delete_first(){
    if(start==NULL){
        printf("Doubly linked list is empty");
        return;
    }
    temp=start;
    start=start->next;
    start->pre=NULL;
    free(temp);
}
void delete_last(){
    if(start==NULL){
        printf("Doubly linked list is empty");
        return;
    }
    temp=start;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->pre->next=NULL;
    free(temp);
}
void delete_specific_element(){
    if(start==NULL){
        printf("Doubly linked list is empty");
        return;
    }
    printf("Enter element to be deleted:");
    scanf("%d",&ele);
    if(start->data==ele){
        temp=start;
        start=start->next;
        start->pre=NULL;
        free(temp);
        return;
    }
    temp=start;
    while(temp->data!=ele && temp->next!=NULL){
        temp=temp->next;
    }
    if(temp->data==ele && temp->next==NULL){
        temp->pre->next=NULL;
        free(temp);
        return;
    }
    if(temp->data==ele){
        temp->pre->next=temp->next;
        temp->next->pre=temp->pre;
        free(temp);
        return;
    }
    if(temp==NULL){
        printf("Element not found");
    }
}
void display(){
    if(start==NULL){
        printf("Doubly linked list is empty");
        return;
    }
    temp=start;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
/* Output:
1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:1
Enter the data:10
Do you want to add another element (Y/N):n

1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:2
Enter element:0

1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:3
Enter element:30

1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:4
Enter element:20
Enter position:3

1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:8
0       10      20      30
1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:5

1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:8
10      20      30
1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:6

1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:8
10      20
1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:7
Enter element to be deleted:20

1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:8
10
1.Create DLL
2.Insert at beginning
3.Insert at last
4.Insert at required position
5.Delete first element
6.Delete last element
7.Delete specific element
8.Display
9.Exit
Enter your choice:9 */

