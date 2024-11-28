/*99) WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS
PRESENT IN THE FILE.*/

#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("myfile.txt","r");

    int vowel=0;
    char ch;

    while((ch=fgetc(fp)) != EOF)
    {
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel+=1;
        }
    }

    printf("\nNumber of vowels in file are: %d",vowel);
    fclose(fp);

}