#include <stdio.h>

// fopen
// fprintf
// fscanf
// fputs fgets
// fwrite
// fread
// fclose

// rb wb ab 
// printf("%u")
int main()
{
FILE *fp; 

fp = fopen("sample.txt","a");
fprintf(fp,"helloWorld\n");
fclose(fp); 
printf("Data written to the file\n!!!");

fp = fopen("sample.txt","r");
if (fp == NULL)
{
    printf("file not there\n");
    return 1;
}
char line[120];
printf("reading file \n");

while(fgets(line, sizeof(line),fp))
{
printf(" %s\n",line);
}
fclose(fp);


return 0;
}