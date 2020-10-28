#include <stdio.h>

int main(void)
{
    int x;
    
    while(1)
    {
        x = getchar();
        printf("x = %d\n", x);
        printf("x = %c\n", (unsigned char)x);
    }    
    
    
}