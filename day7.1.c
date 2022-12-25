#include<stdio.h>
 int length(char A[])
 {
     int l=0;
     while(A[l]!= '\0')
     {
         l++;
     }
     return(l);
 }
 int main()
 {
     int l;
     char A[20];
     printf("enter the string:\n");
     scanf("%s",A);
     l=length(A);
     printf("length of the string is %d",l);
     return 0;
 }
     printf("length of the string is:",l);
}