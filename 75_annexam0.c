/*
    The annual examination results of 10 students are tabulated as follows:

    Roll No.    Subject1    Subject2     Subject3
    .
    .
    .
    .
    _____________________________________________________________________
    Write a program to read the data and determine the following:
(a) Total marks obtained by each student.
(b) The highest marks in each subject and the Roll No. of the student who 
secured it.
(c) The student who obtained the highest total marks.

*/
#include <stdio.h>
int main()
{
    int data[10][4], total[10]={0,0,0,0,0,0,0,0,0,0}, max[3],max_index[3];//initially total marks values
                                                                          //set to 0.

    for (int i=0;i<10;i++)
    {
        printf("\nRoll number: %d",i+1);
        data[i][0]=i+1;
        for(int j=1;j<=3;j++)
        {
            printf("\nEnter marks for Subject %d:",j);
            scanf("%d",&data[i][j]);
        }
    }

    printf("Here is the data:");
    printf("\nROLL NUMBER\tSUBJECT 1\tSUBJECT 2\tSUBJECT 3\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<4;j++)
        printf("%d\t",data[i][j]);

        printf("\n");
    }

    //(a) Total marks obtained by each student.
    for(int i=0;i<10;i++)
    {
        for(int j=1;j<=3;j++)
        total[i]+=data[i][j];
    }
    printf("\nTotal marks obtained by each students:\nRoll number\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t\t%d",i+1,total[i]);
        printf("\n");
    }

    //(b) The highest marks in each subject and the Roll No. of the student who 
    //secured it.
    for(int j=1;j<=3;j++)
    {
        max[j-1]=data[0][j];
        max_index[j-1]=0;
        for(int i=0;i<10-1;i++)
        {
            if(max[j-1]<data[i+1][j])
            {
                max[j-1]=data[i+1][j];
                max_index[j-1]=i+1;
            }
        }

    }
    for(int i=0;i<3;i++)
    {
        printf("\nHighest marks in Subject %d=%d by Roll number %d",i+1,max[i],max_index[i]);
    }

    //(c) The student who obtained the highest total marks.
    int tot_max=total[0],tot_max_index=0;
    for(int i=0;i<10-1;i++)
    {
        if(tot_max<total[i+1])
        { 
            tot_max=total[i+1];
            tot_max_index=i+1;
        }
    }
    printf("S\nStudent who obtained the total highest marks is Roll number %d with marks=%d",tot_max_index+1,tot_max);


}