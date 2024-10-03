// program for selection sort in array

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

    /*
        selection sort logic:
        check through the array for minimum
        and swap it with array index with a loop
        selection index fixes minimum number to last(largest) number
    */


for(int i=0;i<n;i++)
sort[i]=arr[i];

int min,min_index;
   for(int i=0;i<n;i++)
   {
        min=sort[i];
    for (int j=i;j<n-1;j++)
    {
        if(min>sort[j+1])
        {
            min=sort[j+1];
            min_index=j+1;
        }
    }
        int temp=sort[i];
        sort[i]=min;
        sort[min_index]= temp;

   }

   printf("\nThe sorted array is: ");
   for(int i=0;i<n;i++)
   {
    printf("\t%i",sort[i]);
   }

}