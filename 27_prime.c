/*
PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.
*/

#include<stdio.h>
int main()
{
    int num,i;

    printf("\nEnter number to check if it is prime or not.");
    scanf("%d", &num);

    for(i=2; i<num; i++) // loop will check i form 2 to (number-1)
    {
        if (num%2 == 0)
        {
            printf("\nNOT PRIME");
            break; // if it is detected that number is not prime
        }
        else
        continue;
    }

    if(i==num)
    printf("\nPRIME");

    return 0;
}