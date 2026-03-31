
#include <stdio.h>

char hello(char a){
    printf("fun called");
    return a;
}

struct Student
{
    int id;
    float mark;
};

struct Student getStudent()
{
    struct Student s;
    s.id = 9;
    s.mark = 95;

    return s;
    
}

int main()
{
    
   struct Student s1 = getStudent();

   printf("%d\n",s1.id);
   printf("%f\n",s1.mark);

   return 0 ;
}