#include<stdio.h>
void main()
{
    int i,j,n=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            n=i+j-1;
            printf("%d",n);
            printf("\t");
        }
        printf("\n");
    }