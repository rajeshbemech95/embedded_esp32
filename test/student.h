#ifndef STUDENT_H
#define STUDENT_H

#include <stdio.h>

#define FILENAME "students.txt"
#define MAX 100
//Union
typedef union
{
    int marks;
    float percentage;
} Result;
// student stucte
typedef struct 
{
    int id;
    char name[50];
    Result  result;
} Student;

void addStudent(Student s[], int *count);
void displayStudent(Student s[], int count);
void saveToFile(Student s[], int count);
void loadFromFile(Student s[], int *count);

#endif