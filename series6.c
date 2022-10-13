#include<stdio.h>
#include<math.h>
void main()
{
    int n,fact=1,i,x,sign=-1;
    float sum=1;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);
    for(i=2;i<=n;i+2)
    {
        fact=fact*i*(i-1);
        sum=sum+sign*(pow(x,i)/fact);
    }
    sign=sign*(-1);
    printf("factorial of a number is %f",sum );
}    