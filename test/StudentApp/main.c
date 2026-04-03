#include <stdio.h>
#include "student.h"

int main()
{
    Student student[MAX];
    int count = 0;
    int choice;
    while(1)
    {
    printf("***MENU***\n");
    printf("1 . Add Student\n");
    printf("2 . Display Student\n");
    printf("3 . Save to file Student\n");
    printf("4 . Load from file Student\n");
    printf("5 . Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            addStudent(student,&count);
            break;
        case 2:
            displayStudent(student,count);
            break;
        case 3:
            saveToFile(student,count);
            break;
        case 4:
            loadFromFile(student,&count);
            break;
        case 5:
            return 0;
            break;
        default:    
            printf("Invalid Choice\n");
    }
    }
    return 0;

}