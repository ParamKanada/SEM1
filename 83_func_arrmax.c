//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.
#include <stdio.h>

int arr_max(int array[]);

int main()
{
    int arr[10];

    printf("\nEnter the array elements:-\n");
    for(int i = 0; i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nThe array elements are:-\n");
    for(int i = 0; i<10;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("Maximum number is: %d",arr_max(arr));


}

int arr_max(int array[])
{
    int max = array[0];
    for(int i=1;i<10;i++)
    {
        if(max<array[i])
        {
            max = array[i];
        }
    }
    return max;
}