//PROGRAM TO PRINT 1,4,9,16,25,.........N.
#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter number of terms.");
    scanf("%d", &n);

    printf("\nThe series is: ");

    for (i=1;i<=n;i++)
    {
        printf(" %d", i*i);
    }
    return 0;
}