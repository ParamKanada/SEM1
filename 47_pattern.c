/*
A
AB
ABC
ABCD
ABCDE
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++) //since there are 5 rows
    {
        for(j=0;j<=i;j++)
        {
            printf(" %c",j+65); //since A ascii value is 65
        }
        printf("\n");

    }

}