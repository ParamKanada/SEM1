/*94).WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
POINTERS.FOR EXAMPLE,
ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”*/

#include <stdio.h>
int main()
{
    char a[5]="Hell";
    char b[5];

    char *p;

    //copying a to b in rev order
    for(int i=4;i>=0;i++)
    {
        p=&a[i];
        b[4-i]= *p;
    }

    printf("\nString b is:%s\n",b);
   
}