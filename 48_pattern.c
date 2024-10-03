/*
    1
   12
  123
 1234
12345
*/
#include<stdio.h>
int main()
{
    int column;
    printf("Enter number of columns");
    scanf("%d", &column);
    int i,j,k=1;
    for(i=1;i<=column;i++)
    {
        k=1;
        for(j=column;j>=1;j--)
        {
            if(j>i)
            {
                printf(" ");
            }
            else
            {
                printf("%d", k);
                k++;
            }
        }
        printf("\n");
    }
}

/*
core logic:
C1,R1 C2 C3 C4 C5 ...(column number)
R2
R3
R4
R5
.
.
.
(row number)
*/