#include <stdio.h>

int B = 0;
static int internal = 12345;

void global_variable_B1(void)
{
    printf("Inside 1, B = %d\n", B);
    B++;
    if(internal == 12346)
        printf("Hmm...\n");
}

void global_variable_B2(void)
{
    printf("Inside 2, B = %d\n", B);
    B++;
    if(internal == 12346)
        printf("Hmm...\n");
}

