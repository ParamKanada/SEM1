/*92).WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.*/

#include<stdio.h>
int main()
{
    int arr[5]={5,56,55,45,0};
    int *ptr = &arr[0];
    int largest=*ptr;
    for(int i=0;i<4;i++)
    {
        if(*ptr>largest)
        largest=*ptr;

        ptr++;
    }
    printf("\nLargest:%d",largest);
}