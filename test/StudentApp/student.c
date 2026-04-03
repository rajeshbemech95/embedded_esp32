// #include <stdio.h>
#include "student.h"

void addStudent(Student s[], int *count)
{
    int n;
    printf("Enter number of students\n");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("Student %d\n",i+1);
        printf("Enter ID:\n");
        scanf("%d",&s[*count].id);

        printf("Enter Name:\n");
        scanf("%s",s[*count].name);

        printf("Enter Marks:\n");
        scanf("%d",&s[*count].result.marks);

        (*count) ++;
    }

}


void displayStudent(Student s[], int count)
{
    printf("****Student Record*****");
    for(int i = 0; i<count ; i++)
    {
        printf("ID: %d | Name %s | Marks %d\n",s[i].id,s[i].name,s[i].result.marks);
    }
}