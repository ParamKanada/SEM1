//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY

// count number of steps 

#include <stdio.h>

int linear(char c);
int binary(char c);
char arr[26];

int main()
{
    for(int i=0;i<26;i++)
    {
        arr[i]= i + 65;
    }

    printf("Enter an alphabet: ");
    char alphabet= 'P';

    printf("\nNumber of steps searching via method 1 is: %d", linear(alphabet));

    printf("\nNumber of steps searching via method 2 is: %d", binary(alphabet));
    return 0;

}


int linear(char c)
{
    int steps;
    for (steps=1;steps<=26;steps++)
    {
        if (arr[steps-1] == c)
        {
            return steps;
            break;
        }
    }
    
}

int binary(char c)
{
    int flag=0;
    int steps=0;
    int low=0,high=25,mid;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==c)
        {
            flag=1;
            steps++;
            break;
        }
        else if(arr[mid]<c)
        {
            low=mid+1;
        }
        else if (arr[mid]>c)
        {
            high=mid-1;
        }
        steps++;
    }
    
        return steps;
    
}
