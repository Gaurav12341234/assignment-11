//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int fact(int);
int series(int);
int main()
{
    int N,s;
    printf("Enter a number:");
    scanf("%d",&N);
    s=series(N);
    printf("Sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5+......+n!/n is %d ",s);
    return 0;
}
int fact(int n)
{
    int b=1;
    for(;n>1;n--)
        b=b*n;
    return b;
}
int series(int p)
{
    int result=0,i;
    for(i=1;i<=p;i++)
        result=result+fact(i)/i;
    return result;
}