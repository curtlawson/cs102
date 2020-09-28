#include <math.h>
#include <stdio.h>

int my_function(int* x);
int my_function(int* x)
{
    printf("You passed in the integer %d\n", *x);
    return(*x);
}

int main(void)
{
    unsigned int u,v,w;
    int x,y,z;
    char my_char;
    
    float a,b,c;
    
    x = 12.0;
    printf("x = %d\n", x);
    y = 86;
    z = 77;
    
    a = 12.2;
    b = 0.1;
    c = 0.2;
    if(b + c == 0.3)
    {
        printf("b + c is 0.3\n");
    }
    if(a == 12.2)
    {
        printf("a is equal to 12.2\n");
    }
    
    b = a * x;
    printf("b = %f\n", b);
    
    x = 13;
    printf("%d\n", my_function(&x));
//    a = 26.0;
//    printf("%d\n", my_function(&a));
}