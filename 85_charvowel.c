//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT
#include<stdio.h>
void is_vowel(char ch);
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);

    is_vowel(c);
}

void is_vowel(char ch)
{
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("\nVowel");
        break;

        default:
        printf("\nNot vowel");
    }
}