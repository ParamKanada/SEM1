/*
66) PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM 
IN THIRD MATRIX.
67) PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM 
IN THIRD MATRIX.
68) PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM 
IN THIRD MATRIX.
*/

#include <stdio.h>
int x[3][3],y[3][3],res[3][3];
void accept_arr(int a[3][3]);
void print_arr(int a[3][3]);
void mat_value(int a[3][3], int b[3][3]);

int main()
{
    printf("\nEnter array 1:\n");
    accept_arr(x);
    printf("\nEnter array 1:\n");
    accept_arr(y);

    printf("\nArray 1:\n");
    print_arr(x);
    printf("\nArray 2:\n");
    print_arr(y);

    mat_value(x,y);
    printf("\nResulted matrix is:\n")
    print_arr(res);
}

// function to accept an array
void accept_arr(int a[3][3])
{
    printf("\nEnter the array:\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

//function to print array
void print_arr(int a[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}

//function to perform operation on matrix and get 3rd matrix
void mat_value(int a[3][3], int b[3][3])
{
    char choice;
    printf("\nEnter '+' for addition,");
    printf("\nEnter '-' for substraction,");
    printf("\nEnter '*' for multiplication,");
    printf("\nEnter '/' for division,");
    scanf(" %c",&choice);

    switch(choice)
    {

        case '+':
        {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                res[i][j]=a[i][j]+b[i][j];
            }
        }
        break;
        }

        case '-':
        {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                res[i][j]=a[i][j]-b[i][j];
            }
        }
        break;
        }

        case '*':
        {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                res[i][j]=a[i][j]*b[i][j];
            }
        }
        break;
        }

        case '/':
        {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                res[i][j]=a[i][j]/b[i][j];
            }
        }
        break;
        }

        default:
        printf("\nEnter valid choice");
    }
}