#include <stdio.h>
#include <stdlib.h>
// stdlib 
// stdbool 
// stdint.h 
// string.h 

// int main(int argc, char *argv[])
// {
//     printf("num of args passed %d\n",argc);
//     for(int i =0; i < argc; i++)
//     {
//      printf("argumens passed %d: %s\n",argc, argv[i]);   
//     }
//     return 0;
// }

int stringToInt(char str[])
{
    int i = 0, num =0;
    while (str[i] != '\0')
    {
        num = num * 1 + (str[i] - '\0');
        printf("num in fn%d\n", num);
        i++;
    }
    return num;    
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("wrong input\n");
        return 1;
    }

    // int num1 = stringToInt(argv[1]);
    // printf("num1 = %d\n", num1);
    // int num2 = stringToInt(argv[2]);
    // printf("num2 = %d\n", num2);
    int num1 = atoi(argv[1]); 
    int num2 = atoi(argv[2]); 

    printf("Sum = %d\n", num1+ num2);
    return 0;
    // if (argv[1] =="h")
    // {
    //     printf("test print");
    // }
}

// file 
// create 
// read r
// write w
// append a

// fopen
// fclose
// fwrite
// fread
// text 
// binary 

