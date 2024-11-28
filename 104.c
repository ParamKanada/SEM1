//104) Enumeration with Color Names to Display Hexadecimal Color Code

#include <stdio.h>
// Define an enumeration for color names
enum Color {red,green,blue,yellow,black,white};

int main() 
{
    enum Color color;
    printf("Enter a color code (0 for RED, 1 for GREEN, 2 for BLUE, 3 for YELLOW, 4 for BLACK, 5 for WHITE): ");
    scanf("%d", &color);

    // Use a switch statement to display the hexadecimal color code
    switch (color) 
    {
        case 0:
            printf("Hexadecimal color code for RED is #FF0000\n");
            break;
        case 1:
            printf("Hexadecimal color code for GREEN is #00FF00\n");
            break;
        case 2:
            printf("Hexadecimal color code for BLUE is #0000FF\n");
            break;
        case 3:
            printf("Hexadecimal color code for YELLOW is #FFFF00\n");
            break;
        case 4:
            printf("Hexadecimal color code for BLACK is #000000\n");
            break;
        case 5:
            printf("Hexadecimal color code for WHITE is #FFFFFF\n");
            break;
        default:
            printf("Invalidcode\n");
    }

    return 0;
}