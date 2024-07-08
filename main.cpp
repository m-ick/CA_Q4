#include "mbed.h"

/*
    This program initialise int variables ans set them to a = 10, b = 20, c = 30
     - add values of a and b, stores the result variable d 
     - print value of variable d
     - subtract variable c from d, stores the result in variable e 
     - print the value of variable e
*/

int main()
{ 
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 0;
    int e = 0;

    d = a + b;    
    printf("Values %i + %i = %i\r\n", a, b, d);

    e = d - c;
    printf("Values %i - %i = %i\r\n", d, c, e);

    return 0;
}
