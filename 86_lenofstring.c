//WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING.
#include<stdio.h>
#include<string.h>
int length(char *st);
int main()
{
    char line[1000];
    printf("Enter a string. \n");
    gets(line);
    int len = length(line);
    printf("length of string=%d",len);
}

int length(char *st)
{
    int count = 0;
    while(st[count]!='\0')
    {
        count++;
    }

    return count;
}