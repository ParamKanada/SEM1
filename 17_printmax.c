// print max using && logical operator

#include<stdio.h>
void main()
{
{
    int a,b,c;

    printf("enter three no.s \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nThe three numbers are: %d %d %d ", a, b, c);

    if(a>b && a>c)
    {
        printf("\n%d is the max.",a);
    }
    if (b>a && b>c)
    {
        printf("\n%d is the max.",b);
    }
    if(c>a && c>b)
    {
        printf("\n%d is the max.",c);
    }
}
}