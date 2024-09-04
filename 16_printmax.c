#include<stdio.h>
void main()
{
{
    int a,b,c;

    printf("enter three no.s \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("\na=%d b=%d c=%d", a, b, c);

    if (a>b)
    {
        if (a>c)
        {
            printf("\na is max.=%d",a);
        }
        else
        {
            printf("\nc is max.=%d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("\nb is max.=%d",b);
        }
        else
        {
            printf("\nc is max.=%d",c);
        }
    }
}
}