

// structures
// union
#include <stdio.h>

struct message //10
{
    int a; //4
    float b; //4
    char c; //2
    union person //8
    {
        int a; //8
        float b; //4
        char c; //2
    };
} ;

union persons //8
{
    int a; //8
    float b; //4
    char c; //2
};

enum returnType 
{
    SUCCUESS,
    FAILED=8,
    CONFIG_ERROR,
    CONNECTION_fAILED=1,
    RETRY
};

int toggleLED(int num, int pos)
{
    num | (1<<pos);
    return num
}
void (*function)();

function = toggleLED;
function();
//set 
// 1  |  1 1
// 0   | 1 1
int a  = 10101110111001;


toggleLED(a,3);



// a |=  (1<<4)
// a &= ~(1<<4)

// int out = a &  (1<<4)

// 1 
// 0









