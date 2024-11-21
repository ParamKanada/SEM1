/*96) WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING
POINTERS.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *st[10];

    int n;
    printf("Enter number of strings:\n");
    scanf("%d",&n);

    //memory allocation
    for(int i=0;i<n;i++)
    {
        st[i]=(char*)malloc(20*sizeof(char));
    }

    printf("Enter the student names:\n");
    getchar();
    for(int i=0;i<n;i++)
    {
        gets(st[i]);
    }

    printf("The student names:\n");
    for(int i=0;i<n;i++)
    {
        puts(st[i]);
    }

    char *temp = (char*)malloc(20*sizeof(char));
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(st[i],st[j])>0)
            {
                strcpy(temp,st[i]);
                strcpy(st[i],st[j]);
                strcpy(st[j],temp);
            }
        }
    }

    printf("Sorted:\n");
    for(int i =0;i<n;i++)
    {
        puts(st[i]);
    }
    return 0;
}