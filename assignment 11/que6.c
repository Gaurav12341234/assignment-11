//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
#include<stdlib.h>
void prime(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}
void prime(int a,int b)
{
    int i,j;
    for(i=1;i<=b;i++)
    {
        a++;
        for(j=2;j<=a;j++)
        {
            if(a%j==0)
                break;
        }
        if(j==a&&j<b)
            printf("%d ",j);
    }
}