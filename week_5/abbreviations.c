#include <stdio.h>


int main(void)
{
    printf("Hello!\n");
    int x,y,z,w;
    
    float a,b,c;
    
    x = 3;
    y = 5;
    z = 7;
    w = 2397;
    
    a = 23.0;
    b = 42.0;
    c = 100.0;
    

    x = x + 10;
    printf("x = %d\n",x);
    
    x += 10;
    printf("x = %d\n",x);
    
    x -= 10;
    printf("x = %d\n",x);
    
    a = a * b;
    printf("a = %f\n", a);

    a = a / b;
    printf("a = %f\n", a);
    
    w %= 26;  // Equivalent to w = w % 26
    printf("w = %d\n", w);
    
    y *= (x + z);
    printf("y = %d\n", y);
}
