#include<stdio.h>
void main()
{
   int s1, s2, s3;
   printf("Enter sides of a triangle:\n");
   scanf("%d%d%d",&s1,&s2,&s3);
   if(s1 == s2 && s2 == s3)
      printf(" Triangle is equilateral\n");
   else if(s1 == s2 || s2 == s3 || s3 == s1)
      printf(" Triangle is isosceles\n");
   else
      printf(" Triangle is scalene\n");
}
