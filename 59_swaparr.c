/*59) PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE 
ARRAYS*/

#include <stdio.h>
int main()
{
    int a[3][3],b[3][3];

    printf("Enter the array a\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the array b\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nThe array a is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe array b is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }

    //swapping the array
    int temp;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            temp=a[i][j];
            a[i][j]=b[i][j];
            b[i][j]=temp;
        }
    }

     printf("\nThe array a is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe array b is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
}