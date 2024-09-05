//PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3...)

#include<stdio.h>
int main()
{

    int n,i,x,y,z;

    printf("\nEnter number of terms: ");
    scanf("%d", &n);

    printf("\nFIBONACCI SERIES: 0 1");

    x=0,y=1;
    for (i=1;i<=n-2;i++)
    {
        z=x+y;
        printf(" %d",z);
        x=y;
        y=z;
    }
}