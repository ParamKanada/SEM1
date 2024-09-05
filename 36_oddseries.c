// program to print 1,3,5,...n

#include<stdio.h>
int main()
{
    //last number, counting variable
    int n,i;

    printf("\nEnter the last number of series:\n");
    scanf("%d", &n);

    
    if(n%2==1)
    {
        for(i=1; i<=n; i+=2)
        {
            printf(" %d", i);
        }
    }
    else
    {
        printf("\nEnter valid number.");
    }
}
