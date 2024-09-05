// program to print 2,4,6,...n

#include<stdio.h>
int main()
{
    //last number, counting variable
    int n,i;

    printf("\nEnter the last number of series:\n");
    scanf("%d", &n);

    
    if(n%2==0)
    {
        for(i=2; i<=n; i+=2)
        {
            printf(" %d", i);
        }
    }
    else
    {
        printf("\nEnter valid number.");
    }
}
