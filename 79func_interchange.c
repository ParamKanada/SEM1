/*79) WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY
X AND Y .*/

#include <stdio.h>
void interchange();
int a,b; //global
int main()
{
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);

    interchange();

    printf("\nThe exchanged values of numbers: ");
    printf("%d %d",a,b);
}

void interchange()
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}