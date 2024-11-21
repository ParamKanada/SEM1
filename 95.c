/*95)WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.*/

#include<stdio.h>

struct employee_data
{
    int number;
    char name[100];
    float pay;
};

int main()
{

    struct employee_data *ptr;
    struct employee_data arr[50];

    int n;
    printf("Enter the number of employess:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter employee name,number,basic pay\n");
        getchar();
        gets(arr[i].name);
        scanf("%d%f",&arr[i].number,&arr[i].pay);
    }

    for(int i=0;i<n;i++)
    {
        printf("\nemployee name,number,basic pay\n");
        puts(arr[i].name);
        printf("%d\n%f",arr[i].number,arr[i].pay);
    }

}