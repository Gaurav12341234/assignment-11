//3. Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int fun(int);
int main()
{
    int a,s;
    printf("Enter a number:");
    scanf("%d",&a);
    s=fun(a);
    if(s==a)
        printf("Prime number");
    else
        printf("Not prime number");
    return 0;
}
int fun(int x)
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(x%i==0)
            break;
    }
    return i;
}