// Fig. 2.5: fig02_05.c
// Addition program.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int integer1 = 0; // first number to be entered by the user
    int integer2 = 0; // second number to be entered by the user

    // GPP 2.6
    // There is a convention associated later on with
    // variables that start with a capital letter.
    int Sum;
    int SUM;

    // GPP 2.7
    int sum_of_two_integers = 0;
    int sumOfTwoIntegers = 0;

    printf("Enter first integer\n"); // prompt
    scanf("%d", &integer1); // read an integer

    printf("Enter second integer\n"); // prompt
    scanf("%d", &integer2); // read an integer

    int sum = integer1 + integer2;

    printf("Sum is %d\n", sum);

    printf("%d + %d = %d\n", integer1, integer2, integer1 + integer2);
}