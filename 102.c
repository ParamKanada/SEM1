/*102) WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.*/

#include <stdio.h>

int main()
{
    int charcount=0,wordcount=0,linecount=0;

    FILE *fp;
    fp =fopen("myfile.txt","r");

    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        charcount++;

        if(ch=='\n')
        linecount++;

        if(ch ==' ')
        wordcount++;
    }

    wordcount++;

    printf("\nNumber of characters: %d\n", charcount);
    printf("Number of words: %d\n", wordcount);
    printf("Number of lines: %d\n", linecount);

    fclose(fp);
    return 0;
}