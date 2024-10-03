// PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR 
// ELEMENT IN THE ARRAY

#include<stdio.h>
int main()
{
    int size;

    printf("\nEnter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the array:\n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

    int element,count=0;
    printf("\nEnter a number to find it's occurence: ");
    scanf("%d",&element);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        count++;
    }

    printf("\nThis element occured %d times.",count);

}