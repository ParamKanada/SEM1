/*
PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
*/

#include<stdio.h>
int main()
{
    // number, sum of even number, sum of odd number,  counting variable.
    int num, even_sum=0, odd_sum=0,i=1;

    printf("\nEnter NUMBER:");
    scanf("%d", &num);

    while(i<=num)
    {
        //check if number is even
        if(i%2 ==0)
        even_sum+=i; //number adds to even sum

        //check if number is odd
        else
        odd_sum+=i; //number adds to odd sum

        i++;
    }

    //printing result
    printf("\nSum of ODD numbers: %d\n Sum of EVEN numbers: %d ",odd_sum, even_sum);
    return 0;
}