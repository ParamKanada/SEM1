//64) PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS
#include<stdio.h>
int main()
{
   int arr[3][3],row_sum[3]={0,0,0};
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

    //calculating the sum of rows
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            row_sum[i]+=arr[i][j];
        }
    }

    //printing the sum of rows
    for(int i=0;i<3;i++)
    printf("\nSum of row %d: %d",i+1,row_sum[i]);


}
