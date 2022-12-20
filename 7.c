#include <stdio.h>
void main()
{
    int i, j, num, Prime;
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);
    printf("All Prime Factors of %d are: \n", num);
    for(i=2; i<=num; i++)//loop to check if i is the factor of num
    {
        if(num%i==0)
        {
            Prime = 1;
            for(j=2; j<=i/2; j++)//loop to check if i is prime number or not and
           // loop will exectute till i/2 kyuki kisi bhi number ke factor i/2 se kaam hote hai
            {
                if(i%j==0)
                {
                    Prime = 0;
                    break;
                }
            }
            if(Prime==1)
            {
                printf("%d, ", i);
            }
        }
    }
}