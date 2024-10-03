/*65) PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE*/

#include <stdio.h>
int main()
{
    int arr[3][3],transpose[3][3];
    printf("Enter the array\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe array is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            transpose[i][j]=arr[j][i];
        }
    }

    printf("\nThe Transpose is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d",transpose[i][j]);
        }
        printf("\n");
    }


}