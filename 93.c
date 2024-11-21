/*93) WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char st[] = "This is a c language program";

    char *ptr;
    ptr=&st[0];

    int count=0;
    int i=0;

    //with space
    while(*ptr!='\0')
    {
        if(*ptr == ' ')
        count++;

        ptr++;
    }
    printf("\nNmuber of words=%d", count+1);

}