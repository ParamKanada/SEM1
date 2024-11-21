/*90) WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES
USING POINTERS.*/

#include<stdio.h>
int main()
{
    char st[] = "This is a c language program";

    char *ptr;
    ptr=&st[0];

    int count=0;

    //with space
    while(*ptr !='\0')
    {
        count++;
        ptr++;
    }
    printf("\nLength with spaces=%d", count);

    
    //without space
    ptr=&st[0];
    count = 0;
    while(*ptr !='\0')
    {
        if(*ptr != ' ')
        count++;

        ptr++;
    }
    printf("\nLength without spaces=%d", count);

}