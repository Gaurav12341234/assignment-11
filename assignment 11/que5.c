//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int N)
{
    int i,x=2;
    while(N)
    {
        for(i=2;i<=x;i++)
        {
            if(x%i==0)
            {
                if(x==i)
                {
                    printf("%d ",x);
                    N--;
                }
                else
                    break;
            }
        }
        x++;
    }
}