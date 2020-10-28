#include <stdio.h>

unsigned long factorial(unsigned long n);

// This is a recursive function that calculates n!
unsigned long factorial(unsigned long n)
{
    unsigned long rv;
    
    // Two cases in a recursive function
    // 1. Base Case
    if(n == 1)
    {
        rv = 1;
    }
    else
    {
        // 2. Recursive Step
        rv = n * factorial(n-1);
    }

    return rv;
}


int main(void)
{
    unsigned long n;
    
    printf("Enter n: ");
    scanf("%lu", &n);
    
    printf("n! = %lu\n", factorial(n));
    
    // n! = n * (n-1) * (n-2) * ... * 2 * 1
    // n! = n * (n-1)!
    //    = n * (n-1) * (n-2)!
}