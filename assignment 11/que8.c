//8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int fact(int);
int comb(int,int);
void pascal(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    pascal(n);
    return 0;
}
int fact(int n)
{
    int b=1;
    while(n>=1)
    {
        b=b*n;
        n--;
    }
    return b;
}
int comb(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
void pascal(int n)
{
    int i,j,k,r;
     for(i=1;i<=n;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i&&k)
            {
                printf("%d",comb(i-1,r));
                r++;
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}