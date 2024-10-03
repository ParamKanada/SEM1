// program to reverse an array

#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nThe original Array is: ");
    for(int i=0;i<n;i++)
    {
        printf("\t%d", arr[i]);
    }

    // reversing the array
    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp = arr[(n-1)-i];
        arr[(n-1)-i]=arr[i];
        arr[i]=temp;
    }

    printf("\nThe sorted array is: ");
    for(int i=0; i<n;i++)
    {
        printf("\t%d", arr[i]);
    }

}
