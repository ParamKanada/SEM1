/*An election is contested by 5 candidates. The candidates are numbered 1 to 5 
and the voting is done by marking the candidate number on the ballot paper. 
Write a program to read the ballots and count the votes casted for each candidate 
using an array variable count. In case, a number, read is outside the range 1 to 5, 
the ballot should be considered as a ‘spoilt ballot’ and the program should also 
count the number of spoilt ballots*/

#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter number of voters: ");
    scanf("%d",&n);

    int votes[n];
    int count[6]={0,0,0,0,0,0};

    for(int i=0;i<n;i++)
    {
        printf("\nEnter 1 for candidate 1");
        printf("\nEnter 2 for candidate 2");
        printf("\nEnter 3 for candidate 3");
        printf("\nEnter 4 for candidate 4");
        printf("\nEnter 5 for candidate 5\n");

        scanf("%d",&votes[i]);

        switch(votes[i])
        {
            case 1:
                count[0]++; //count[0] will store no. of vote for candidate 1.
                break;

            case 2:
                count[1]++; //count[1] will store no. of vote for candidate 2.
                break;

            case 3:
                count[2]++; //count[2] will store no. of vote for candidate 3.
                break;

            case 4:
                count[3]++; //count[3] will store no. of vote for candidate 4.
                break;

            case 5:
                count[4]++; //count[4] will store no. of vote for candidate 5.
                break;

            default:
                count[5]++; //count[5] will stored spoilt ballots    
        }

    }

    for(int i=0;i<5;i++)
    printf("\nVotes for candidate %d:\t%d",i+1,count[i]);

    printf("\nNumber of spoiled ballots: %d",count[5]);
   

}


