#include<stdio.h>
int main()
{
    int a1[10],a2[10],res[10];

    printf("\nEnter array 1:\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a1[i]);

    printf("\nEnter array 2:\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a2[i]);

    //doing addition
    for(int i=0;i<10;i++)
    res[i]=a1[i]+a2[i];

    printf("\nThe addition is:\n");
    for(int i=0;i<10;i++)
    printf("\t%d",res[i]);

}