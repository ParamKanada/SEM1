/*89)WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF
SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.*/

#include <stdio.h>
int main()
{
    int a[5],b[5];

    printf("Enter the elements of array a:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe elements of array a are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }

    int *p;

    //copying a to b
    for(int i=4;i>=0;i++)
    {
        p=&a[i];
        b[4-i]= *p;
    }

    printf("\nThe elements of array b are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }

}