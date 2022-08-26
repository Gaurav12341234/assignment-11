//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int,int);
int main()
{
    int a,b,s;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    s=HCF(a,b);
    printf("HCF is %d",s);
    return 0;
}
int HCF(int x,int y)
{
    int i,hcf;
    for(i=1;i<=x;i++)
    {
        if(x%i==0&&y%i==0)
            hcf=i;
    }
    return hcf;
}