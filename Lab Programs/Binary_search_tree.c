//Binary search tree
//Code:
#include<stdio.h>
struct Node{
    struct Node *left;
    int data;
    struct Node *right;
};
typedef struct Node node;
node *new1,*curr,*root,*ptr;
void create_bst();
void preorder();
void inorder();
void postorder();
int ch,item;
char c;
void main(){
    while(1){
        printf("\n1.Create a binary search tree\n2.Traverse using Preoder\n3.Traverse using Inorder\n4.Traverse using Postorder\n5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:create_bst();
            break;
            case 2:{printf("\nAfter traversing using Preorder:\n");
                    preorder(root);
                    break;}
            case 3:{printf("\nAfter traversing using Inorder:\n");
                    inorder(root);
                    break;}
            case 4:{printf("\nAfter traversing using postorder:\n");
                    postorder(root);
                    break;}
            case 5:exit(0);
            break;
        }
    }
}
void create_bst(){
    new1=(node*)malloc(sizeof(node));
    printf("Enter data:");
    scanf("%d",&new1->data);
    new1->left=NULL;
    new1->right=NULL;
    root=new1;
    while(1){
        printf("Do you want to add another element (Y/N):");
        scanf("%s",&c);
        if(c=='y' || c=='Y'){
            new1=(node*)malloc(sizeof(node));
            printf("Enter data:");
            scanf("%d",&new1->data);
            item=new1->data;
            new1->left=NULL;
            new1->right=NULL;
            curr=root;
            while(curr!=NULL){
                ptr=curr;
                curr=(item>curr->data)?curr->right:curr->left;
            }
            if(item<ptr->data){
                ptr->left=new1;
            }
            else{
                ptr->right=new1;
            }
        }
        else{
            return;
        }
    }
}
void preorder(node *temp){
    if(temp!=NULL){
        printf("%d\t",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void inorder(node *temp){
    if(temp!=NULL){
        inorder(temp->left);
        printf("%d\t",temp->data);
        inorder(temp->right);
    }
}
void postorder(node *temp){
    if(temp!=NULL){
        postorder(temp->left);
        postorder(temp->right);
        printf("%d\t",temp->data);
    }
}
/* Output:
1.Create a binary search tree
2.Traverse using Preoder
3.Traverse using Inorder
4.Traverse using Postorder
5.Exit
Enter your choice:1
Enter data:10
Do you want to add another element (Y/N):y
Enter data:15
Do you want to add another element (Y/N):y
Enter data:33
Do you want to add another element (Y/N):y
Enter data:2
Do you want to add another element (Y/N):y
Enter data:7
Do you want to add another element (Y/N):y
Enter data:28
Do you want to add another element (Y/N):y
Enter data:65
Do you want to add another element (Y/N):n

1.Create a binary search tree
2.Traverse using Preoder
3.Traverse using Inorder
4.Traverse using Postorder
5.Exit
Enter your choice:2

After traversing using Preorder:
10      2       7       15      33      28      65
1.Create a binary search tree
2.Traverse using Preoder
3.Traverse using Inorder
4.Traverse using Postorder
5.Exit
Enter your choice:3

After traversing using Inorder:
2       7       10      15      28      33      65
1.Create a binary search tree
2.Traverse using Preoder
3.Traverse using Inorder
4.Traverse using Postorder
5.Exit
Enter your choice:4

After traversing using postorder:
7       2       28      65      33      15      10
1.Create a binary search tree
2.Traverse using Preoder
3.Traverse using Inorder
4.Traverse using Postorder
5.Exit
Enter your choice:5 */
