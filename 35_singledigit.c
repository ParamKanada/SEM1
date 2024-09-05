//READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF
//N

#include<stdio.h>

int sum_of_digits();
int reduce_single_digit();

int main()
{
    int num;

    printf("\nEnter number.");
    scanf("%d", &num);

    printf("\nResult is: %d", reduce_single_digit(num));
    return 0;
}

 int sum_of_digits(int n)
    {
        int sum=0;
        while(n!=0)
        {
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }

    int reduce_single_digit(int n)
    {
        while(n>=10)
        {
            n= sum_of_digits(n);
        }
        return n;
    }