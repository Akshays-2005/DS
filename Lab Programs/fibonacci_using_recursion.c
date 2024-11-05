//Fibonacci number using recursion
Code:
#include<stdio.h>
int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
void main()
{
    int n,fib;
    printf("Enter number:");
    scanf("%d",&n);
    fib=fibo(n);
    printf("Fibonacci number:%d",fib);
}
Output:
//Fibonacci number using recursion
Code:
#include<stdio.h>
int fibo(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
void main()
{
    int n,fib;
    printf("Enter number:");
    scanf("%d",&n);
    fib=fibo(n);
    printf("Fibonacci number:%d",fib);
}
Output:
Enter number:8
Fibonacci number:13
