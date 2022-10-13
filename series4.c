#include<stdio.h>
#include<math.h>
void main()
{
    int n,fact=1,i,x;
    float sum=1;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(pow(-x,i)/fact);
    }
    printf("factorial of a number is %f",sum );
}