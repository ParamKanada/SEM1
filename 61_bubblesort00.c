// program for bubble sort in array

#include<stdio.h>
int main()
{
    int n;

    //no. of enteries
    printf("Enter number of elements in array: ");
    scanf("%i",&n);

    int arr[n],sort[n];
    //accepting array from user
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    //printing the array
    printf("\nThe array is:\t ");
    for(int i=0;i<n;i++)
    {
        printf("\t%d", arr[i]);
    }

    //sort[]=arr[] copying
    for(int i=0;i<n;i++)
    {
        sort[i]=arr[i];
    }

    /*
        bubble sort logic:
        check through the array for i, i+1, 
        if i+1,i than swap
        keep doing it until swapped
        bubble sort fixes last number first
    */

        int temp;
    for(int i=1;i<=n;i++)   //n is the maximum number of passes
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if(sort[j+1]<sort[j]) //then swap
            {
                temp = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = temp;
            }
        }
    }


   printf("\nThe sorted array is: ");
   for(int i=0;i<n;i++)
   {
    printf("\t%d",sort[i]);
   }

}