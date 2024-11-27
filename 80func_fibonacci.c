/*80) WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI
NUBERS.TEST THE FUNCTION FOR N=5,10,AND 15.*/

#include <stdio.h>
void Fibonacci(int n);

int main()
{
   
    printf("First 5 Fibonacci numbers:\n");
    Fibonacci(5);
    
    printf("\nFirst 10 Fibonacci numbers:\n");
    Fibonacci(10);
    
    printf("\nFirst 15 Fibonacci numbers:\n");
    Fibonacci(15);

    return 0;
}


void Fibonacci(int n)
{
    int first = 0, second = 1, next, i;
    if (n <= 0)
    {
        printf("Invalid input, N should be positive.\n");
        return;
    }
    else if (n == 1) 
    {
        printf("%d ", first);
        return;
    }

   
    printf("%d %d ", first, second);

    
    for (i = 3; i <= n; i++)
    {
        next = first + second;  
        printf("%d ", next);    
        first = second;         
        second = next;
    }
    printf("\n");  
}

// try fibonacci with recursion.
