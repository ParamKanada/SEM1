/*56) PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, 
NEGATIVE, AND ZERO ELEMENTS*/
#include <stdio.h>
int main()
{
    float arr[10];
    int pos_count=0,neg_count=0,zero_count=0;

    printf("\nEnter the array:\n");
    for(int i=0;i<10;i++)
    scanf("%f",&arr[i]);

    printf("\nThe array is:");
    for(int i=0;i<10;i++)
    printf("\t%f",arr[i]);

    for(int i=0;i<10;i++)
    {
        if(arr[i]<0)
        neg_count++;

        else if(arr[i]>0)
        pos_count++;

        else
        zero_count++;
    }

    printf("\nNumber of positive elements: %d",pos_count);
    printf("\nNumber of negetive elements: %d",neg_count);
    printf("\nNumber of zero elements: %d",zero_count);

}