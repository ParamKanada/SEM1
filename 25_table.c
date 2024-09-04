/*
 PROGRAM TO PRINT TABLE OF ANY NO.
*/

#include<stdio.h>
int main()
{
    //number,counting variable.
    int num,i=1;

    printf("\nEnter the number for table: ");
    scanf(" %d", &num);

    // printing table
    while(i<=10)
    {
        printf("\n %d X %d = %d", num, i, num*i);
        i++;
    }
    return 0;
}