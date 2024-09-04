/*WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
1+x where n=1
1+x/n where n=2

Y(x,n) = 1 +xn

when n=3
1 + nx when n>3 or n<1
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float x,y;

    printf("\nEnter x, n respectively:\n");
    scanf("%f%d",&x,&n);

    switch(n)
    {
        case 1:
        y= 1+x;
        break;

        case 2:
        y= 1+ (float)(x/n) ; //type casted to float as n is a n int
        break;
        
        case 3:
        y= 1 + pow(x,n);
        break;

        default:
        y= 1+ n*x;
    }
    
    printf("\nValue of y: %f" , y);
    return 0;
}