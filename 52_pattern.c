/*
   1
  121
 12321
1234321

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of cloumns: ");
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++)
    {
        k=1;
        for (int j=n;j>=1;j--)
        {
            if(j>i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",k);
                k++;
            }
        }
        for(int j=k-1;j>1;j--)
        {
            printf("%d",j-1);
        }

        printf("\n");

    }



    return 0;
}

/*
logic:
in first column, number of spaces are n-1
in second column, number of spaces are n-2
*/