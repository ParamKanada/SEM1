/*
WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES
REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
If sales<= Rs.500, commission is 5%
If sales>  Rs.500 but <=2000, commission is Rs. 35 plus 10% above Rs. 500
If sales>  Rs.2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
If sales>  Rs.5000, commission is 12.5%
*/

#include <stdio.h>
int main()
{
    float sales, commision;
    printf("\nEnter your sales:\n");
    scanf("%f", &sales);

    if(sales <= 500)
   { 
        commision= (5.0/100)*sales;     // used 5.0 instead of 5 because integer division will give zero, rather used 
                                        // floating point variable
        printf("Your COMMISION is: Rs.%.3f", commision);
   }
    else if(sales>500 && sales <= 2000)
    {
        commision= 35 + (10.0/100)*(sales-500);
        printf("Your COMMISION is: Rs.%.3f", commision);
    }
    else if(sales>2000 && sales<=5000)
    {
        commision= 185 + (12.0/100)*(sales-2000);
        printf("Your COMMISION is: Rs.%.3f", commision);
    }
    else if(sales>5000)
    {
        commision= (12.5/100)*sales;
        printf("Your COMMISION is: Rs.%.3f", commision);
    }
    else
    {    
      printf("\nEnter valid sales");
    }
    return 0;
}