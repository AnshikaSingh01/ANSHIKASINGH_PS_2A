#include<stdio.h>
#include<math.h>
void main()
{
    int r,area;
    printf("enter the radius of the circle");
    scanf("%d",&r);
    if(r>0)
    {
        area=2*r*r;
        printf("area of maximum rectangle:%d",area);
    }
    else
    {
        printf("circle not posible");
    }

}