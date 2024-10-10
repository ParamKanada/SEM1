/*78) WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.*/

#include <stdio.h>

void isarmstrong(int x); //prototype

int main()
{
    int num;
    printf("\nEnter number to check ARMSTRONG\n");
    scanf("%d", &num);

    isarmstrong(num);

    return 0;
}

void isarmstrong(int x)
{
    //temporary container,q to separate digits, sum of cubes
    int temp,q,sum=0;
    temp=x;   //assigning input number value to temporary variable

    while(temp!=0)
    {
        q=temp%10; //will separate last digit
        sum+=(q*q*q);
        temp/=10; //will remove last digit 
    }

    if (sum==x)
    printf("ARMSTRONG");
    else 
    printf("NOT ARMSTRONG");

}