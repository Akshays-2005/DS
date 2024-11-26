//Circular Queue
//Code:
#include<stdio.h>
#define size 4
int cq[20],i,ch,front=-1,rear=-1,item;
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
            case 2:item=delete();
                    if(item!=-1)
                    {
                        printf("Deleted element is %d",item);
                    }
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
                    break;
        }
    }
}
void insert()
{
    if(front==(rear+1)%size)
    {
        printf("Circular queue is full");
        return;
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=(rear+1)%size;
    }
    printf("Enter element to be inserted:");
    scanf("%d",&item);
    cq[rear]=item;
    return;
}
int delete()
{
    if(front==-1 && rear==-1)
    {
        printf("Circular queue is empty");
        return(-1);
    }
    item=cq[front];
    if(front==rear)
    { 
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%size;
    }
    return(item);
}
void display()
{
    if(front==-1 && rear==-1)
    {
        printf("Circular queue is empty");
        return;
    }
    printf("Circular queue contains:\n");
    if(front<=rear)
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",cq[i]);
        }
    }
    else
    {
        for(i=front;i<=size-1;i++)
        {
            printf("%d\t",cq[i]);
        }
        for(i=0;i<=rear;i++)
        {
            printf("%d\t",cq[i]);
        }
    }
    return;
}
/*
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
Enter element to be inserted:40

1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:1
Circular queue is full
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:3
Circular queue contains:
10      20      30      40
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
Deleted element is 40
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:2
Circular queue is empty
1.Insert
2.Delete
3.Display
4.Exit
Enter your choice:4 */
