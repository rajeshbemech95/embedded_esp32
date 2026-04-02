// // user form -> APP -> db -> internet -> cloud
// db row column
// entry 1 
// sql 3306, sqlite 3306, oracle 5611 mango, postgerege
// CONNECT
// CREATE TABLE
// INSERT 
// ROLLON
// CLOSE
// .txt
// .log
// .db

// shared memory - App to App 

// txt
// nvs non-volatile-memory 
// dbus com/app/
// stack  last in first out
// queue   fifo

// enque, deque
// [1024]

// file 

// create 
// write / append
// read 
// // close

#include <stdio.h>

// file pointer pointer 
// FILE *fp;
// fp =fopen("sample.txt", "w");
// // r 
// // w 
// // a 
// // r+ 
// // a+ 
// fclose(fp);
// fprintf(fp,"hello");
// fputc
// fputs

// fscanf
// fgetc 
// fgets 

// if(fp == NULL)
// ""

// //binary 
// fread 
// fwrite

int main()
{
    FILE *fp;

    char data[100];

    // fp = fopen("sample.txt","a");
    // fprintf(fp, "\nhello");
    // fclose(fp);

    fp = fopen("sample.txt","r");
    if(fp == NULL){
        printf("file not found");
        return 1;
    }
    // fscanf(fp,"%s","sample.txt")
    fgets(data, sizeof(data), fp);
    // printf("%s",data);
    fclose(fp);

    printf("%s",data);

    //

}


// int i;
// int i=0;
// stack 
// data ->local variable inistised
// text -> text
// bss -> static 

// heap -> *p malloc calloc realloc 
















