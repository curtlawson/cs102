#include <stdio.h>

int main(void)
{
    printf("Hello world!\n");

    int x = 10;
    int condition_met = 1;
    while(x > 0)
    {
        printf("x = %d\n", x);
        x = x - 2;
    }
    
    int value = 1; 
    while(value != 0)
    {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &value);
        if(value == 0)
        {
            printf("Sentinel value detected!\n");
        }
    }
    
}