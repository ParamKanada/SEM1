/* 76) WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.*/

#include <stdio.h>
void odd_even(int x); //prototype declaration
void main()
{
    int a;
    printf ("enter a number\n ");
    scanf("%d", &a);

    odd_even(a); //functon calling
}

void odd_even(int x) //function
{
     if (x%2 == 0)
    printf("even");
    else
    printf("odd");
}