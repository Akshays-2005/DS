//Implementation of Queue operations
Code:
#include<stdio.h>
#define max 3
int q[20],front=-1,rear=-1,ch,ele,i;
void insert();
int delete();
void display();
void main()
{
    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
                    break;
            case 2:ele=delete();
                    if(ele!=-1)
                    {
                        printf("Deleted element is %d",ele);
                    }
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
                    break;
            default :printf("Wrong choice");
        }
    }
}
void insert()
{
    if(rear==max-1)
    {
        printf("Queue if full");
        return;
    }
    if(rear==-1)
    {
        rear=0;
        front=0;
    }
    else
    {
        rear=rear+1;
    }
    printf("Enter element to be inserted:");
    scanf("%d",&ele);
    q[rear]=ele;
}
int delete()
{
    if(front==-1)
    {
        printf("Queue is empty");
        return(-1);
    }
    ele=q[front];
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=front+1;
    }
    return(ele);
}
void display()
{
    if(front==-1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue contents:\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",q[i]);
    }
    return;
}
Output:
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:1
Enter element to be inserted:10

1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:1
Enter element to be inserted:20

1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:1
Enter element to be inserted:30

1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:1
Queue if full
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:3
Queue contents:
10      20      30
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:2
Deleted element is 10
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:2
Deleted element is 20
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:2
Deleted element is 30
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:2
Queue is empty
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:4
