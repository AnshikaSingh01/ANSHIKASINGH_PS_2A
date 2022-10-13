#include<stdio.h>
void main()
{
    int n,fact=1,sum=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(fact/i);
    }
    printf("the sum of the given series is %d",sum);
}