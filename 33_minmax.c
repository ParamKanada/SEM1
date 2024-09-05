//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.

//PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .

#include<stdio.h>
int main()
{
    int input,max,min,N,i;
    printf("\nEnter number of enteries (N): ");
    scanf("%d", &N);

    printf("\nEnter numbers.\n");

    scanf("%d", &input);
    max=input;
    min=input;

    for(i=1;i<=N-1;i++) //N-1 because we are already acceptng input once before loop
    {
        scanf("%d", &input);
        if(max<=input)
        {
            max= input;
        }

        if(min>=input)
        {
            min=input;
        }
    }

    printf("\nMAXIMUM NUMBER: %d", max);
    printf("\nMINIMUM NUMBER: %d", min);
    return 0;

}