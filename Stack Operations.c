//Stack Operations
#include<stdio.h>
#include<conio.h>
#define max 3
void push();
int pop();
void display();
int s[10],item,top=-1,i,ch;
void main()
{
    while(1)
    {
        printf(" 1:Push\n 2:Pop\n 3:Display\n 4:Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:item=pop();
                   if(item!=-1)
                    printf("Popped element is %d\n",item);
                    break;
            case 3:display();
                   break;
            case 4:exit(0);
                   break;
        }
    }
    getch();
}
void push()
{
    if(top==max-1)
    {
        printf("STACK OVERFLOW\n");
        return;
    }
    printf("Enter element to be pushed:");
    scanf("%d",&item);
    top=top+1;
    s[top]=item;
}
int pop()
{
    if(top==-1)
    {
        printf("STACK UNDERFLOW\n");
        return(-1);
    }
    item=s[top];
    top=top-1;
    return item;
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack contents:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
    return;
}
