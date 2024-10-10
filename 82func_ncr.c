#include <stdio.h>

int factorial(int x);
int ncr(int x, int y);

int main()
{
    int n,r,result;
    printf("Enter n and r");
    scanf("%d%d",&n,&r);

    result = ncr(n,r);    
    printf("\nThe result value is: %d",result);
}

int ncr(int x, int y)
{
    return factorial(x)/(factorial(y)*factorial(x-y));
}

int factorial(int x) //using recursion
{
    if(x==1) //exit condition
    {
        return 1;
    }

    return x*factorial(x-1);
}
