//PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
//eg. 121,1335331,2442,tc.

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

    // checking if number is palindrome or not
    if(rev==num)
    printf("\nPALINDROME");
    else
    printf("\nNOT PALINDROME");

    return 0;
}