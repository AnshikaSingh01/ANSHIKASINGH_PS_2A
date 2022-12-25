#include<stdio.h>
 int main()
{
    char gr;
    int basic,hra,da,allow,pf,ts;
    printf("Enter the grade:\n");
    scanf("%c",&gr);
    printf("Enter basic salary:\n");
    scanf("%d",&basic);
    hra=0.2*basic;
    da=0.5*basic;
    if(gr=='A')
        allow=1700;
    else if(gr=='B')
        allow=1500;
    else
        allow=1300;
    pf=0.11*basic;
    ts=basic+hra+da+allow-pf;
    printf("total salary is %d",ts);
}
