//PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.

#include<stdio.h>
int main()
{
    int num,q,sum=0,temp;

    printf("\nEnter number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        q=temp%10;
        sum+=q;
        temp/=10;
    }

    printf("\n Sum of Digits is= %d", sum);
    
    return 0;
}