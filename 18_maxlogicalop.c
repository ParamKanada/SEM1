/*
PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :)
OPERATOR.
*/

#include<stdio.h>
int main ()
{
    int i1,i2,i3;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &i1, &i2, &i3);

    int max= (i1>((i2>i3)? i2:i3)) ? i1:((i2>i3) ? i2:i3);
    printf("MAXIMUM NUMBER IS: %d", max);
}