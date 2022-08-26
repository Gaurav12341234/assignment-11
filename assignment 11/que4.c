//4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
    int x,s;
    printf("Enter a number:");
    scanf("%d",&x);
    s=prime(x);
    printf("Next prime no. of a given no. is: %d",s);
    return 0;
}
int prime(int a)
{
    while(a)
    {
        int i;
        a++;
        for(i=2;i<=a;i++)
        {
            if(a%i==0)
            break;
        }
        if(i==a)
            return i;
    }
}