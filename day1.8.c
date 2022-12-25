#include<stdio.h>
 void main()
 {
     int p1,p2;
     printf("enter the values of points of X and Y points:\n");
     scanf("%d%d",&p1,&p2);
     if(p1>0&&p2>0)
        printf("points lies in the first quadrant");
     else if(p1<0&&p2>0)
        printf("points lies in the second quadrant");
     else if(p1<0&&p2<0)
        printf("points lies in the third quadrant");
     else if(p1>0&&p2<0)
        printf("points lies in the fourth quadrant");
     else
        printf("points lies at the origin");

 }