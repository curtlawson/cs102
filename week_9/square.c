#include <stdio.h>

int square(int x);

// square Function Example
// Figure 5.3, p162
int main(void)
{
    // Loop 10 times and calculate and output the square of x each time
    for(int x = 1; x <= 10; x++)
    {
        printf("square(%d) = %d\n", x, square(x));
    }
}

// square function definition returns the square of its parameter
int square(int x)
{
    return x * x;
}


