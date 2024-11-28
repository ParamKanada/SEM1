/*107). IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
LAST N DIGITS*/

#include<stdio.h>
#include<math.h>

void flip(int number,int n);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int n;
    printf("\nEnter number of last digits you want to swap: ");
    scanf("%d",&n);


    flip(num,n);
    return 0;
}

void flip(int number,int n)
{
    int result;

   int div = pow(10,n);

   //extracting last n digits
   int last = number%div;

   //extracting remaining digits
   int rem=number/div;

   //reversing the last digits;
   int rev=0;
   while(last>0)
   {
        rev=last%10 + 10*(rev);
        last/=10;
   }

   result =rem*div + rev;

   printf("\nThe result is: %d",result);
}