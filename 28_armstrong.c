//PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
//armstrong is number whose sum of cube of its digit is
//number itself eg,153

#include<stdio.h>
int main()
{
    //number,temporary container,q to separate digits, sum of cubes
    int num,temp,q,sum=0;

    printf("\nEnter number to check ARMSTRONG:\n");
    scanf("%d", &num);

    temp=num;   //assigning input number value to temporary variable

    while(temp!=0)
    {
        q=temp%10; //will separate last digit
        sum+=(q*q*q);
        temp/=10; //will remove last digit 
    }

    if (sum==num)
    printf("ARMSTRONG");
    else 
    printf("NOT ARMSTRONG");

    return 0;

}