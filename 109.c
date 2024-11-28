/*109) Modify Value Stored in Another Variable Using a Pointer in C
A. Initialize the Pointer with the Other (A Normal Variable Whose Value We Have to Modify)*/

#include <stdio.h>

//call by refrence
void modify(int *ptr)
{
    *ptr = 15;
}

int main() {
    int var = 10;
    int *ptr = &var; 

    printf("Before modification: %d\n", var);

    // Call the function to modify the value
    modify(ptr);

    printf("After modification: %d\n", var);

    return 0;
}