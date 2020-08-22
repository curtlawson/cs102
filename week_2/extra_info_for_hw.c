#include <stdio.h>

int main(void)
{
    int x = 123;
    int y = 7;
    int sum = x + y;
    int product = x * y;
    int quotient = x / y;
    int remain = x % y;
    int difference = x - y;

    //       17   r 4
    //    -------
    //  7 | 123
    //

    int foo = x * (y + x) * (sum + remain);
    printf("foo = %d\n", foo);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("sum = %d\n", sum);
    printf("product = %d\n", product);
    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", remain);
    printf("difference = %d\n", difference);

    return 0;
}