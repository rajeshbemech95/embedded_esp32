#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("arguments %s\n",argv[0]);
        return 1;
    }

    int sum = 0;
    for (int i= 0;i<argc;i++)
    {
        sum += atoi(argv[i]);
    }

    printf("sum is %x\n",sum);
    return 0;

}