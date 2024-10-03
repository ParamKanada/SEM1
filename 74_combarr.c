/*
Given are one dimensional arrays A and B which are sorted in ascending order. 
Write a program to merge them into a single sorted array C that contains every 
item form array A and B, in ascending order.
*/

//gives merge sort vibes
#include<stdio.h>
int main()
{
    int a[5]={1,5,16,17,58};
    int b[7]={2,8,17,50,56,60,100};
    int merge[5+7];

    for(int i=0,j=0,k=0;k<5+7;k++)
    {
        if(a[i]<=b[j])
        {
            merge[k]=a[i];
            i++;
        }

        else 
        {
            merge[k]=b[j];
            j++;
        }
    }

    printf("\nThe new sorted array is: ");
    for(int k=0;k<5+7;k++)
    printf("\t%d", merge[k]);

    return 0;

}