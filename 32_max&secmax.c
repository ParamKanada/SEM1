//PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .

#include<stdio.h>
int main()
{
    int input,max,sec_max,N,i;
    printf("\nEnter number of enteries (N): ");
    scanf("%d", &N);

    printf("\nEnter numbers.\n");

    scanf("%d", &input);
    max=input;
    sec_max=input;

    for(i=1;i<=N-1;i++) //N-1 because we are already acceptng input once before loop
    {
        scanf("%d", &input);
        if(max<=input)
        {
            sec_max=max;
            max= input;
        }
    }

    printf("\nMAXIMUM NUMBER: %d", max);
    printf("\nSECOND MAX NUMBER: %d", sec_max);
    return 0;

}
