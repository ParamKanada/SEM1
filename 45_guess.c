/*45. (A GUESSING GAME): With this program the user has to guess a number that
the program has picked as the lucky number. It uses one for loop and plenty of if
statements. I’ve also thrown in a conditional operator, just to make sure you
haven’t forgotten how to use it!*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lucky_num, guess;

    int attempts = 3;
   
    srand(time(0));
    lucky_num = rand() % 100 + 1; //modulus operator limits the rand() values %100 means
                                    //0,1,....97,98,99 are possible

    printf("Welcome to the Guessing Game!\n");
    printf("Pick a lucky number between 1 and 100.\n");
    printf("You have %d attempts\n", attempts);

    for (int i = 1; i <= attempts; i++)
    {
        printf("guess: ",);
        scanf("%d", &guess);

       
        if (guess < 1 || guess > 100)
        {
            printf("Please guess a number between 1 and 100.\n");
        }
        else if (guess == lucky_num)
        {
            printf("you've guessed the lucky number: %d\n", lucky_num);
            break; 
        }
        else if(lucky_num<guess)
        {
            printf("Incorrect guess. The lucky number is lower than %d.\n", guess);
        }
         else if(lucky_num>guess)
        {
            printf("Incorrect guess. The lucky number is higher than %d.\n", guess);
        }
    }

    printf("The lucky number was: %d\n", lucky_num);
    printf("Thank you for playing!\n");

    return 0;
}