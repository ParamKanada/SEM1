// program to calculate factorial of given number

#include <stdio.h>
int main()
{
    // number,factorial,temporary number
    int num,fac=1,i=1;

    printf("\n Enter number to find it's factorial:\n");
    scanf("%d", &num);

    // calculation of factorial
    while(i<=num)
    {
        fac=fac*i;      //fac=1*2*3*...*num;
        i++;            //i=1,2,3,...,num;
    }
    printf("\n FACTORIAL IS:%d", fac);
}