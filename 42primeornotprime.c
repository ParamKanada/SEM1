#include<stdio.h>
int main()
{
    int n,m;
    int flag=1;
    printf("Enter the Number N = ");
    scanf("%d",&n);
    
    for(m=2;m<n&&(flag!=0);m++)
    {
        if(n%m==0)
        {
            printf("\n Number N is Composite");
            flag=0;
        }

    }

    if(m==n)
    {
        printf("Number N is prime");
    }

}
