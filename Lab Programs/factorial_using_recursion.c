//Factorial of a number using recursion
Code:
#include<stdio.h>
int fact(int n)
{
    int f;
    if(n==0 || n==1)
    {
        f=1;
    }
    else
    {
        f=n*fact(n-1);
    }
    return f;
}
void main()
{
    int n,t,f1;
    printf("Enter number:");
    scanf("%d",&n);
    t=n;
    f1=fact(n);
    printf("Factorial of %d is %d",t,f1);
}
Output:
Enter number:5
Factorial of 5 is 120
