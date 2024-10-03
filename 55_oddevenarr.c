/*55) PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND 
TOTAL NO. OF EVERY ELEMENT*/

#include<stdio.h>
int main()
{
    int arr[10],odd=0,even=0;
    printf("\nEnter the array:\n");
    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);

    printf("\nThe array is:");
    for(int i=0;i<10;i++)
    printf("\t%d",arr[i]);

     for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        even++;

        else
        odd++;
    }

    printf("\nNumberof of odd elements:%d",odd);
    printf("\nNumberof of even elements:%d",even);
}