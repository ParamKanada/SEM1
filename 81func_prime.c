/*81) WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN
ZERO OTHERWISE.*/

#include<stdio.h>

void isprime(int x);
int main()
{
    int num;

    printf("\nEnter number to check if it is prime or not.");
    scanf("%d", &num);

   isprime(num);

    return 0;
}

void isprime(int x)
{
    int i;
    if(x==1)
    {
        printf("1 is neither prime nor composite.");
    }
    for(i=2; i<x; i++) // loop will check i form 2 to (number-1)
    {
        if (x%2 == 0)
        {
            printf("\nNOT PRIME");
            break; // if it is detected that number is not prime
        }
        else
        continue;
    }

    if(i==x)
    printf("\nPRIME");
}