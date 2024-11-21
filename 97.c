/*97) WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.*/

#include<stdio.h>
int main()
{
    char st[30],*ptr;
    int count=0;

    printf("Enter the String:\n");
    gets(st);

    ptr = &st[0];
    while(*ptr!=0)
    {
        switch(*ptr)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            count++;
        }
        ptr++;
    }

    printf("\nNumber of vowels:%d",count);

}