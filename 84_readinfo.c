//WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.

#include<stdio.h>
#include<string.h>
void get_info(char ch[]);
void display_info(char ch[]);

int main()
{
    char st[100];
    printf("Enter the the information of bool:\n");
    get_info(st);
    display_info(st);
}

void get_info(char ch[])
{
    char c;
    int i =0;
    do
    {
        scanf("%c",&c);
        ch[i]=c;
        i++;
    } while (c!='\n');
    ch[i] = '\0';
}

void display_info(char ch[])
{
    int i=0;
    while(ch[i]!='\0')
    {
        printf("%c",ch[i]);
        i++;
    }
}