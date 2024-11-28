/*106). CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,
PRICE AND AMOUNT.
IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND
PRICE AS INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.*/

#include<stdio.h>

struct ITEM
{
    char name[20];
    int quantity;
    float price,amount;
};

void readitem(struct ITEM *a);

int main()
{
    struct ITEM item;

    readitem(&item);

    return 0;
}

void readitem(struct ITEM *a)
{
    printf("Enter item name: ");
    scanf("%s", a->name);
    printf("Enter quantity: ");
    scanf("%d", &a->quantity);
    printf("Enter price: ");
    scanf("%f", &a->price);
    a->amount = a->quantity * a->price;

    printf("\nAmount=%.2f",a->amount);
}