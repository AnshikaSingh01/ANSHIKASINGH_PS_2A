#include<stdio.h>
void main()
{
    int i,j,k,rows;
    printf("enter the no of rows");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
      for(j=1;j<=i;j++)
       {
         printf("%d",j);
          j++;
       }
       for(j=i*2;j<rows*2-1;j++)
      {
         printf(" ");
         j++;
      }
      for(k=i;k>=1;k--)
       {
        if(k!=rows)
         printf("%d",k);
       }
     printf("\n");
    }
}

