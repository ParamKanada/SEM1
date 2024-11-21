/*91)WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.*/

#include<Stdio.h>
int main()
{
    int a=100;
    int *ptr = &a;

    printf("\nSquare:%d",*ptr * *ptr);
    printf("\nCube:%d",*ptr * *ptr * *ptr);
}