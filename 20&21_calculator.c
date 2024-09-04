// making a simple calculator using switch case

#include <stdio.h>

void main()
{

    float a,b; //two numbers for operations
    char x; // will use it to ask for what kind of operation

    printf(" Enter the two numbers respectfully:\n");
    scanf("%f %f", &a, &b);

    printf("\n Enter:\n '+' for ADDITION,\n '-' for SUBSTRACTION\n '*' for MULTIPLICATION\n '/'for Division\n");
    scanf(" %c", &x);

   /*scanf("%c", &x); <== this caused an error, asked chat gpt
    scanf for character might also capture new line or space as a character itseld
    using space before %c is important. Example: " %c" is correct way  
    as it will ignore any space or new line as input*/
    
    switch(x) //here use just x and not 'x'
    {

        case '+' :
        printf("\nADDITION IS: %.6f", a+b);
        break;

        case '-' :
        printf("\nSUBSTRACTION IS: %.6f", a-b);
        break;

        case '*' :
        printf("\nMULTIPLICATION IS: %.6f", a*b);
        break;

        case '/' :
        printf("\nDIVISION IS: %.6f", a/b);
        break;

        default:
        printf("\nEnter valid arguements");

    }
    

}