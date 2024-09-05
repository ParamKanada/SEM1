/*

*/

#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("\nKeep entering numbers to find the sum. Program will stop when you enter a negative number:\n");

    while(num == num) //infinite loop
    {
        scanf("%d", &num);

        if (num<0)
        break;

        else
        {
            sum+=num;
        }
    }
    printf("\nThe sum is: %d", sum);
    return 0;
}