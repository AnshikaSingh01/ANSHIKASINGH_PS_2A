#include<stdio.h>
 void main()
 {
   int yr;
   printf("Enter the year:\n");
   scanf("%d",&yr);
    (yr%4==0 && yr%100!=0)||(yr%400==0) ? printf("LEAP YEAR") :printf("Not a leap YEAR");

}

