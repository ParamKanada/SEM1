/*//103) Define a Macro to Find the Biggest Number of Two Given Numbers
#include <stdio.h>*/

//
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() 
{
    int a,b;
    printf("Enter numbers: ");
    scanf("%d %d", &a,&b);

    // Use the macro to find the biggest number
    int biggest = MAX(a,b);
    printf("The biggest number is: %d\n", biggest);

    return 0;
}