/*
WRITE A PROGRAM IN C FOR THE FOLLOWING.
AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS
FOLLOWS.

Consumption in unit Rate for Charge

units:      charge:  
0-200       : Rs. 0.50 per unit
210-400     : Rs. 100 plus Re 0.65 per unit excess of 200
401-600     : Rs. 230 plus Re 0.80 per unit excess of 400
Above 600   : Rs. 425 plus Rs. 125 per unit excess of 600

Print the amount to be paid by the consumer.
*/

#include<stdio.h>
int main()
{
    int units;
    float bill;

    printf("\nEnter number of units consumed: \n");
    scanf("%d", &units);


    switch(units/100)
    {
        case 0:
        bill= 0.5*units;
        break;

        case 1:
        bill= 0.5*units;
        break;
        
        case 2:
        bill= 100 + 0.65*(units-200);
        break;

        case 3:
        bill= 100 + 0.65*(units-200);
        break;

        case 4:
        bill= 230 + 0.80*(units-400);
        break;

        case 5:
        bill= 230 + 0.80*(units-400);
        break;

        default:
        bill=425 + 1.25*(units-600);
    }
    printf("\nYour BILL is = %f", bill);
}