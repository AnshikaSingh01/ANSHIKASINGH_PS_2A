#include<stdio.h>
 void main()
 {
   int n1,n2,n3;
   printf("enter the numbers:\n");
   scanf("%d%d%d",&n1,&n2,&n3);
   if(n1>n2&&n1>n3)
    printf("n1 is the largest");
   else if(n2>n1&&n2>n3)
    printf("n2 is the largest");
   else
    printf("n3 is the largest");
 }
