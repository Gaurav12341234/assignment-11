//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int);
int main()
{
    int n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    s=square(n);
    printf("Square of %d is %d",n,s);
    return 0;
}
int square(int x)
{
    return x*x;
}