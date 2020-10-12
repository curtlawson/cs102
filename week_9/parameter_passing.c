#include <stdio.h>

int square(int* x);


int main(void)
{
    printf("Getting data into and out of functions.\n");    
    int x = 25;
    printf("before square(x), x = %d\n", x);
    int foo = square(&x);
    printf("after square(x), x = %d\n", x);
    
}

// x is passed by value into square
int square(int x)
{
    printf("Inside square, I got %d\n", x);
    x = 2;
    printf("Inside square, before returning, x is %d\n", x);
    return x * x;
}
