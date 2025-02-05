// #include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
// #include "app.h"
// a =10;

// void sample()
// {
//     int a =5;
// }


// void main()
// {
//     int a =8;
// }


// static > stack
// dynamic > heap

// if 
// else 
// else if
// break
// continue
// i=0
// i=i+1 //1
// i=i+1

// loops
// for
// while
// do while

// bool array()
// {
//     int i =false;
//     int arr[5]={2,3,6,5,9};
//     printf("%d",arr[3]);
//     for(i=0;i<5;i++)
//         {
//         printf("i is %d\n",i);
//         printf("Array elements are %d\n",arr[i]);
//         }
//     return i;
// }
// int main()
// {
// int rv;
// rv = array();
// if(rv ==0 )
// {
    
//     printf("for loop is ok");
// }
// else
// {
//     printf("%d\n",rv);
// }
// return 0;
// }

// int i =10;


// int add(int a,int b )
// {
//     printf("%d\n",a+b);
// }

int pointers(int i)
{
    int *ptr = &i;
    printf("i value is%d\n",i);
    printf("i address is%d\n",&i);
    printf("ptr address is%d\n",ptr);

    // printf("%d",sizeof(i));

    return *ptr;
}
void main(int argc,int *argv[])
{
  pointers(argv[0]);
}






// int *ptr=NULL
// ptr =64
// 0004 =f1 > 10
// 0002 f2 >10
// 0001 f3 >10
// 0000 f4 >10