/*
        *
       ***
      *****
     *******
      *****
       *** 
        *   
*/

//similar to question 52

#include <stdio.h>
int main()
{
    int column;
    printf("Enter number of columns");
    scanf("%d",&column);

    for (int i=1;i<=column;i++)
    {
        

        for (int j=column;j>i;j--) //spaces
        {
            printf(" ");
        }

        for (int j=1;j<=i;j++) //increasing
        {
            printf("*");
        }

        for (int j=i-1; j>=1; j--) //decreasing
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i=1;i<=column-1;i++)
    {
        

        for (int j=1;j<=i;j++) //spaces
        {
            printf(" ");
        }

        for (int j=1;j<= column-i;j++) //increasing
        {
            printf("*");
        }

        for (int j=column-1-i; j>=1;j--) //decreasing
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}