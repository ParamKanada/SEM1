// Write a program in C to rotate an array by N positions.

#include<stdio.h>
int size;
int rot_arr[size];
void rotateonce(int a[size]);
int main()
{
    printf("\nEnter array size: ");
    scanf("%d",&size);

    int arr[size];

    printf("\nEnter the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nHow many positions do you want to rotate the array? ");
    int N;
    scanf("%d",&N);

    /*
        logic: say size of array=8, rotate 3 times. that is easy.
               say size of array=7  but rotate 10 times, we are actually rotating only 3 times which is 10%7
    */
   int rotate=N%size;
    
    /*
    temp1=arr[1]
    arr[1]=arr[0]
    temp2=arr[2]
    arr[2]=temp1
    arr[3]=arr[2]
    */

   for(int i=1;i<rotate;i++)
   rotateonce(arr);

   /*Rotate only one time and then make it a function. And the use that function in loop.
   last element in first element of rotated array*/

    printf("\nThe new rotated array is:");
    for(int i=0;i<size;i++)
    printf("\t %d", rot_arr[i]);
    return 0;
}

void rotateonce(int arr[size])
{
    for(int i=0;i<size-1;i++)
    {
        rot_arr[i+1]=arr[i];
    }
    rot_arr[0]=arr[size-1];

}