//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("\"Fibonacci series have terms are:\"");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int n)
{
    int a=1,b=1,c,i;
    printf("%d %d",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
}