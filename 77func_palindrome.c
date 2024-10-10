/*77) WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.*/

#include <stdio.h>

void ispalindrome(int x); //prototype

int main()
{
    int num;
    printf("\nEnter number to check PALINDROME\n");
    scanf("%d", &num);

    ispalindrome(num);

    return 0;
}

void ispalindrome(int x)
{
     //temporary variable to store number,q to get last digit of number one by one, reverse of number
    int temp,q,rev=0;

    
    for (temp=x;temp!=0;temp/=10) // temp/=10 for removing last digit one by one
    {
        q=temp%10; //getting last digits one by one 
        rev=(rev*10)+q; //making reverse number
    }

    // checking if number is palindrome or not
    if(rev==x)
    printf("\nPALINDROME");
    else
    printf("\nNOT PALINDROME");
}