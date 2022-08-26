//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int,int);
int main()
{
    int a,b,s;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    s=LCM(a,b);
    printf("LCM is %d",s);
    return 0;
}
int LCM(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0&&i%y==0)
            return i;
    }
}