#include<stdio.h>
void toh(int n,char s,char t,char d)
{
    if(n==1)
    {
        printf("Move %d from %c to %c\n",n,s,d);
    }
    else
    {
        toh(n-1,s,d,t);
        printf("Move %d from %c to %c\n",n,s,d);
        toh(n-1,t,s,d);

    }
}
void main()
{
    int n;
    char s='S',d='D',t='T';
    printf("Enter number:");
    scanf("%d",&n);
    toh(n,s,t,d);
}
