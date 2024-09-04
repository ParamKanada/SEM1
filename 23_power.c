// program to calculate power of a number without using math library

#include <stdio.h>
int main()
{
    // number,power,result,counting variable.
    int num,power,result=1;

    //accepting number and power.
    printf("\nEnter NUMBER: ");
    scanf("%d", &num);

    printf("\nEnter it's POWER: ");
    scanf("%d", &power);

    //calculating result
    for(int i=1; i<=power;i++)
    {
        result *= num;
    }

    printf("\nAnswer is= %d", result);
}