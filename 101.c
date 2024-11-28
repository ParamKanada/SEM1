/*101 ) WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.*/

/*100) A FILE CALLED “SVNIT_STUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL
NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N
STUDENTS.*/

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollnumber;
    char name[50];
    int totalmarks;
};

int main()
{
    FILE *fp;
    struct Student std;
    int n, i;

    // open the file
    fp = fopen("SVNIT_STUDENTS.txt", "a");

    // to get no. of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input details of each student and write to the file
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:", i + 1);

        printf("\nRoll Number: ");
        scanf("%d", &std.rollnumber);
        getchar(); 

        printf("Name: ");
        gets(std.name);

        printf("Total Marks: ");
        scanf("%d", &std.totalmarks);

        // Write student details to the file
        fprintf(fp, "Roll Number: %d\nName: %s\nTotal Marks: %d\n\n",
                std.rollnumber, std.name, std.totalmarks);
    }

    // Close the file
    fclose(fp);

    printf("\nDetails of %d students have been saved to LNMIITSTUDENT.txt.\n", n);
    return 0;
}
