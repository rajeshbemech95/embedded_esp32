#include "student.h"


void saveToFile(Student s[], int count)
{
    FILE *fp;
    fp = fopen(FILENAME, "w");
    if(fp == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    for(int i = 0 ; i <count;i++)
    {
        fprintf(fp,"%d %s %d\n",s[i].id,s[i].name, s[i].result.marks );
    }
    fclose(fp);
    printf("Data entered\n");
}

void loadFromFile(Student s[], int *count)
{
    FILE *fp;
    fp = fopen(FILENAME, "r");
    if(fp == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    while(fscanf(fp,"%d, %s, %d ",&s[*count].id,s[*count].name,&s[*count].result.marks) != EOF)
    {
        (*count)++;
    }
    fclose(fp);
    printf("Data loaded from file");
}