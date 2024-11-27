//PROGRAM TO READ N ARRAY AND FIND OUT MAX AND SECOND MAX

#include <stdio.h>
int main()
{
    int arr[10];
    int max,secmax;

    printf("Enter the array:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    max=secmax=arr[0];
/*
problem with this code is if first element is maximum then, second max always stays the first element
*/
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            secmax=max;
            max=arr[i];
        }

        if(arr[i]<max && arr[i]>secmax)
        {
            secmax=arr[i];
        }
    }
}
