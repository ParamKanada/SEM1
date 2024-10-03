/*63) PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.*/

#include<stdio.h>
int main()
{
    int arr[3][3],min,max;
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

    min=arr[0][0];
    max=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(arr[i][j]>max)
           max=arr[i][j];

           if(arr[i][j]<min)
           min=arr[i][j];
        }
    }

    printf("\nminimum is: %d",min);
    printf("\nmaximum is: %d",max);
}