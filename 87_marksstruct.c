/*87) WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION).*/

#include<stdio.h>
#include<string.h>

 struct student
    {
        char name[50];
        int marks;
        int roll_no;
    };

void read(struct student students[]);

int main()
{
    struct student arr[10];

    for(int i=0;i<10;i++)
    {
        printf("Enter the name:\n");
        getchar();
        gets(arr[i].name);
        printf("Enter marks:\n");
        scanf("%d",&arr[i].marks);
        printf("Enter the roll number:\n");
        scanf("%d",&arr[i].roll_no);
    }

    printf("\nStudents with marks more than 500 are:\n");
    read(arr);
    return 0;
}

void read(struct student students[])
{
    for(int i =0;i<10;i++)
    {
        if (students[i].marks>500)
        {
            printf("\nName: %s,\tRoll no. : %d,\tMarks: %d",students[i].name,students[i].roll_no,students[i].marks);
        }
    }
}