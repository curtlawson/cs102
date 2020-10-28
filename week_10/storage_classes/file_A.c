#include <stdio.h>

int A = 0;

void global_variable_1(void)
{
    printf("Inside 1, A = %d\n", A);
    A++;
}

void global_variable_2(void)
{
    printf("Inside 2, A = %d\n", A);
}
