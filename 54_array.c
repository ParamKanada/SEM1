//program to read 10 array and print their sum

#include<stdio.h>
int main()
{
    int arr[10], sum=0;

    // accepting the array
    printf("Enter the number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);   //& is for address sir told in class
    }

    //printing the array
    printf("\nThe array is:");
    for(int i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }

    //doing the sum
    for(int i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("\nThe sum of 10 number in array is: %d", sum);
}