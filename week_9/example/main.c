#include <stdio.h>

#include "processing.h"

int main(void)
{
    int num;
    printf("This is a program built from code in two source files.\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d^2 = %d\n", num, square(num));
}