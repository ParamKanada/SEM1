/*71) Write a program in C to find the pivot element of a sorted and rotated array
using binary search. Pivot element is the only element in input array which is
smaller than its previous element. A pivot element divided a sorted rotated array
into two monotonically increasing array.*/

#include <stdio.h>
int main()
{
    int high,low;
    int low_index=0,high_index=5;


    printf("\nLet the array is:");
    int arr[6]={5,8,69,115,200,3500};
    for(int i=0;i<6;i++)
    {
        printf("\t%d",arr[i]);
    }

    int rotate_arr[6]={200,3500,5,8,69,115};
    printf("\nThe rotated array is:");
    for(int i=0;i<6;i++)
    {
        printf("\t%d",rotate_arr[i]);
    }

    high =arr[5];
    low= arr[0];

    while(high!=low)
    {
        if(high<low)
        {
            printf("\nNot rotated");
        }
    else if(high == low)
    {
        
    }
    }


}