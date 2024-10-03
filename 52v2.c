/*
   1
  121
 12321
1234321
method two
*/

#include <stdio.h>
int main()
{
    int column;
    printf("Enter number of columns");
    scanf("%d",&column);

    for (int i=1;i<=column;i++)
    {
        

        for (int j=column;j>i;j--) //spaces
        {
            printf(" ");
        }

        for (int j=1;j<=i;j++) //increasing
        {
            printf("%d",j);
        }

        for (int j=i-1; j>=1; j--) //decreasing
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}