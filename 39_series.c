//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,.........N.

#include<stdio.h>
int main()
{
    double sum=0;
    int i,n,fac=1;

    printf("\nEnter number of terms : ");
    scanf("%d", &n);

for(i=1;i<=n;i++)
{
    fac*=i;
    sum+= (double)i /fac;
}

printf("\nSum of series: %lf", sum);
}