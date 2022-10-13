#include<stdio.h>
void main()
{
    int n,sum=0,fact=1,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    sum=sum+fact;
    printf("factorial of a number %d is %d ",n,fact);
}