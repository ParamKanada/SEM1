//PROGRAM TO REVERSE GIVEN NUMBER

#include<stdio.h>
int main()
{
    //number,temporary variable to store number,q to get digits of number, reverse of number
    int num,temp,q,rev=0;

    printf("\nEnter number to check PALINDROME\n");
    scanf("%d", &num);

    for (temp=num;temp!=0;temp/=10) // temp/=10 for removing last digit one by one
    {
        q=temp%10; //getting last digits one by one 
        rev=(rev*10)+q; //making reverse number
    }
    printf("\nReverse number is: %d", rev);

    return 0;

}